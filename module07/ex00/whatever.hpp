/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 13:33:27 by tshimoda          #+#    #+#             */
/*   Updated: 2022/07/03 14:42:03 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template<typename T>

void	swap( T& a, T& b )
{
	T temp;

	temp = a;
	a = b;
	b = temp;
}

template<typename T>
const T&	min( const T& a, const T& b )
{
	return b <= a ? b : a;
}

template<typename T>
const T&	max( const T& a, const T& b )
{
	return b >= a ? b : a;
}

#endif
