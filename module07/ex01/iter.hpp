/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 13:34:58 by tshimoda          #+#    #+#             */
/*   Updated: 2022/07/03 14:01:43 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template<typename T>
void	iter( T* array, size_t len, void (*f)(const T&) )
{
	for (size_t i = 0; i < len; i++)
	{
		f(array[i]);
	}
}

template<typename T>
void	printElement( const T& element )
{
	std::cout << element << std::endl;
}

#endif
