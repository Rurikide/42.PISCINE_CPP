/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 18:00:01 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/28 18:08:05 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "define.hpp"
#include <iostream>

Intern::Intern( void )
{
	std::cout << "Intern Default Constructor" << std::endl;
	mode[0].formClass = "shrubbery creation";
	mode[0].formExecute = &Intern::makeShrubbery;
	mode[1].formClass = "robotomy request";
	mode[1].formExecute = &Intern::makeRobotomy;
	mode[2].formClass = "presidential pardon";
	mode[2].formExecute = &Intern::makePresidential;
}

Intern::Intern( const Intern& rhs )
{
	std::cout << "Intern Copy Constructor" << std::endl;
	*this = rhs;
}

Intern::~Intern( void )
{
	std::cout << "Intern Default Destructor" << std::endl;
}

Intern& Intern::operator=( const Intern& rhs )
{	
	mode[0].formClass = rhs.mode[0].formClass;
	mode[0].formExecute = rhs.mode[0].formExecute;
	mode[1].formClass = rhs.mode[1].formClass;
	mode[1].formExecute = rhs.mode[1].formExecute;
	mode[2].formClass = rhs.mode[2].formClass;
	mode[2].formExecute = rhs.mode[2].formExecute;

	return *this;
}

Form*	Intern::makeForm( const std::string& formClass, const std::string& target ) const
{
	for (int nb = 0; nb < 3; nb++)
	{
		if (mode[nb].formClass == formClass)
		{
			std::cout << MIDORI << "Intern" << END_COLOR << " creates " << SORAIRO << formClass << " form" << END_COLOR << std::endl;
			return (this->*mode[nb].formExecute)(target);
		}
	}
	std::cout << AKAI << "Error form " << formClass << " doesn't exist" << END_COLOR << std::endl;
	return NULL;
}

Form*	Intern::makeShrubbery( const std::string& target ) const
{
	return new ShrubberyCreationForm(target);
}

Form*	Intern::makeRobotomy( const std::string& target ) const
{
	return new RobotomyRequestForm(target);
}

Form*	Intern::makePresidential( const std::string& target ) const
{
	return new PresidentialPardonForm(target);
}

// delete in the main

