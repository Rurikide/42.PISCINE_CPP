/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 15:16:27 by tshimoda          #+#    #+#             */
/*   Updated: 2022/07/03 16:30:29 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <string>
#include <exception>

template<typename T>
class Array {

	private:
		
		T*				elements_; // MUST use new to allocate memmory
		unsigned int	n_;
		
	public:

		Array( void ){ elements_ = new T[0]; n_ = 0; };

		Array( unsigned int n ){ elements_ = new T[n]; n_ = n };

		Array( const Array& rhs ){ *this = rhs; };

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
};

#endif
