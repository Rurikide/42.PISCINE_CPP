/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 15:16:27 by tshimoda          #+#    #+#             */
/*   Updated: 2022/07/03 17:46:25 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <string>
#include <exception>

template<typename T>
class Array {

	private:
		
		T*				elements_; // MUST use new to allocate mamoru
		unsigned int	n_;
		
	public:

		Array( void ) : elements_(new T[0]), n_(0) {};

		Array( unsigned int n ) : elements_(new T[n]), n_(n) {};

		Array( const Array& rhs ) : elements_(NULL){ *this = rhs; };

		virtual ~Array( void ){ delete[] elements_; };

		Array&	operator=( const Array& rhs )
		{
			if (this != &rhs)
			{
				delete[] elements_;
				n_ = rhs.n_;
				elements_ = new T[n_];
				for (unsigned int i = 0; i < n_; i++)
					elements_[i] = rhs.elements_[i];
			}
			return *this;
		}


		class OutOfBoundsException : public std::exception {
			public: 
				virtual const char* what() const throw() { return "Index out of bounds"; }
		};

		T&	operator[]( unsigned int i ){ if (i >= n_){ throw OutOfBoundsException(); } return elements_[i]; };
		
		unsigned int	size( void )const{ return n_; };
};

#endif
