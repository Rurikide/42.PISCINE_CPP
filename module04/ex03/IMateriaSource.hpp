/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 18:21:28 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/24 18:26:23 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP

#include <string>

class AMateria;

class IMateriaSource {
	
	public:
		virtual ~IMateriaSource( void );
		virtual void	learnMateria( AMateria* ) = 0;
		virtual AMateria*	createMateria( const std::string& type ) = 0;
};

#endif

