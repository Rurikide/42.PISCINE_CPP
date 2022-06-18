/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 15:07:14 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/18 10:57:13 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <string>

class Harl {

	private:
		std::string trigger[4];

		void	debug( void ) const;
		void	info( void ) const;
		void	warning( void ) const;
		void	error( void ) const;

	public:
		Harl( void );
		~Harl( void );

		void	complain( std::string level );
};

#endif
