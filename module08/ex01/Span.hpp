/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 16:34:04 by tshimoda          #+#    #+#             */
/*   Updated: 2022/07/04 16:40:59 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

class Span {

	private:

		Span( void );

		unsigned int	N_;

	public:
		Span( unsigned int N );
		~Span( void );
		Span( const Span& rhs );

};

#endif
