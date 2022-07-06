/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 12:53:27 by tshimoda          #+#    #+#             */
/*   Updated: 2022/07/05 17:22:06 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span( void ) {}

Span::Span( unsigned int N )
{
	vec.reserve(N);
	capacity = N;
}

Span::~Span( void ) {}

Span::Span( const Span& rhs )
{
	*this = rhs;
}

Span&	Span::operator=( const Span& rhs )
{
	vec.reserve(rhs.capacity);
	capacity = rhs.capacity;

	return *this;
}

void	Span::addNumber( int value )
{
	if (vec.size() >= capacity)
		throw Span::FullCapacityException();

	vec.push_back(value);
}

void	Span::printNumber( void )
{
	for (ITER it = vec.begin(); it != vec.end(); ++it)
		std::cout << *it << std::endl;
}

void	Span::fillSpan( ITER first, ITER last )
{
	for (; first != last; ++first)
		addNumber(*first);
}

int	Span::shortestSpan( void )
{
	if (vec.size() <= 1)
		throw Span::NoSpanException();
	
	std::vector<int> delta(capacity);

	std::adjacent_difference(vec.begin(), vec.end(), delta.begin());

	for (std::vector<int>::iterator it = delta.begin(); it != delta.end(); it++)
		*it = std::abs(*it);

	std::sort(delta.begin(), delta.end());

	return *delta.begin();
}

int	Span::longestSpan( void )
{
	if (vec.size() <= 1)
		throw Span::NoSpanException();
	
	std::vector<int> delta(capacity);
	
	std::adjacent_difference(vec.begin(), vec.end(), delta.begin());

	for (std::vector<int>::iterator it = delta.begin(); it != delta.end(); it++)
		*it = std::abs(*it);

	std::sort(delta.begin(), delta.end());
	
	return *delta.rbegin(); // rbegin = last element inserted in the vector
}

const char*	Span::FullCapacityException::what() const throw()
{
	return "Error: span vector is already full";
}

const char*	Span::NoSpanException::what() const throw()
{
	return "Error: no span distance found, since this vector array only contains 0 to 1 element";
}

