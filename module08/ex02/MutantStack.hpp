/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 10:34:37 by tshimoda          #+#    #+#             */
/*   Updated: 2022/07/06 10:34:45 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <deque>
#include <list>
#include <vector>

//The std::stack class is a container adaptor that gives the programmer the functionality of a stack - specifically, a LIFO (last-in, first-out) data structure. 
//Stack don't have iterators. Need to implement it yourself on top of other containers such as std::list, std::vector or std::deque(its default)
// c.begin() & c.end(): The underlying container named 'c' is a protected member object of the std::stack class.

template<typename T>
class MutantStack : public std::stack<T> {
	
	public:
		MutantStack( void ){};
		~MutantStack( void ){};
		MutantStack( const MutantStack& rhs ){ *this = rhs; };
		
		MutantStack& operator=( const MutantStack& rhs )
		{ std::stack<T>::operator=(rhs); return *this; };

		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator	begin( void ){ return std::stack<T>::c.begin(); };
		iterator	end( void ){ return std::stack<T>::c.end(); };

};
#endif
