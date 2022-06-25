/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <tshimoda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 18:21:28 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/24 22:04:26 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP

#include <string>
#include "AMateria.hpp"

class IMateriaSource {
	
	public:
		virtual ~IMateriaSource( void ) {};
		virtual void	learnMateria( AMateria* ) = 0;
		virtual AMateria*	createMateria( const std::string& type ) = 0;
};

#endif

