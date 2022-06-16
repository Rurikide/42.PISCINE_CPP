/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 11:16:54 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/16 14:16:27 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

class Weapon {
	
	private:
		std::string _type;

	public:

		Weapon( std::string type );
		~Weapon( void );

		const std::string&	getType( void ) const;
		void				setType( std::string type );
};

#endif
