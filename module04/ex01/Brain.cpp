/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 14:01:09 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/23 16:45:42 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp" // includes <string>
#include "define.hpp"
#include <iostream>

Brain::Brain( void ) //No need to initialize _ideasarray because on stack 
{
	std::cout << GRAYGREY << "Brain Default Constructor" << END_COLOR << std::endl;
}

Brain::Brain( const Brain& rhs )
{
	std::cout << GRAYGREY << "Brain Copy Constructor" << END_COLOR << std::endl;
	*this = rhs;
}

Brain::~Brain( void )
{
	std::cout << GRAYGREY << "Brain Destructor" << END_COLOR << std::endl;
}

Brain& Brain::operator=( const Brain& rhs )
{
	for (size_t nb = 0; nb < CAPACITY; nb++)
		this->_ideas[nb] = rhs.getIdea(nb); //deepcopy (by value, not by address)
	return *this;
}

const std::string&	Brain::getIdea( const size_t nb ) const
{
	return this->_ideas[nb];
}

void	Brain::printIdeas( void ) const
{
	for (int nb = 0; nb < CAPACITY; nb++)
		std::cout << "Idea #" << nb + 1 << ": " << this->_ideas[nb] << std::endl;
}

void	Brain::setIdeas( const std::string& idea )
{
	for	(int nb = 0; nb < CAPACITY; nb++)
		this->_ideas[nb] = idea;
}

