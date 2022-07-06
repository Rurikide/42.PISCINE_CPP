/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 16:34:04 by tshimoda          #+#    #+#             */
/*   Updated: 2022/07/05 17:16:10 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <exception>
#include <iostream>
#include <numeric> // std::adjacent_difference
#include <string>
#include <vector>
#include "define.hpp"

#define ITER std::vector<int>::iterator

class Span {

	private:

		Span( void );

		std::vector<int>	vec;
		unsigned int		capacity;

	public:

		Span( unsigned int N );
		~Span( void );
		Span( const Span& rhs );

		Span&	operator=( const Span& rhs );
		
		void	addNumber( int value );
		void	printNumber( void );
		void	fillSpan( ITER first, ITER last ); 

		int	shortestSpan( void ); // return the shortest dist between two elements in the vector array
		int	longestSpan( void );

		class FullCapacityException : public std::exception
		{
			public: virtual const char* what() const throw();
		};

		class NoSpanException : public std::exception
		{
			public: virtual const char* what() const throw();
		};
};

#endif
