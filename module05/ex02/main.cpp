/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 13:07:31 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/29 09:50:21 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "define.hpp"
#include <iostream>
#include <stdlib.h>

// ShrubberyCreationForm signature 145, execute 137
// RobotomyRequestForm	signature 72, execute 45
// PresidentialPardonForm signature 25, execute 5

int	main(void)
{
	try
	{
		Bureaucrat isa = Bureaucrat("Isabelle", 1);
		Bureaucrat tom = Bureaucrat("Tom", 42);
		Bureaucrat so = Bureaucrat("Sophie", 75);
		Bureaucrat cori = Bureaucrat("Cori", 145);
		Bureaucrat max = Bureaucrat("Maxime", 151);
	}
	catch (Bureaucrat::GradeInvalidException& e)
	{
		std::cout << e.what() << std::endl;
	}

	Bureaucrat isa = Bureaucrat("Isabelle", 1);
	Bureaucrat tom = Bureaucrat("Tom", 42);
	Bureaucrat so = Bureaucrat("Sophie", 75);
	Bureaucrat cori = Bureaucrat("Cori", 145);
	Bureaucrat max = Bureaucrat("Maxime", 150);

	ShrubberyCreationForm s1 = ShrubberyCreationForm("sa");
	ShrubberyCreationForm s2 = ShrubberyCreationForm("sb");
	ShrubberyCreationForm s3 = ShrubberyCreationForm("sc");

	isa.signForm(s1);
	cori.executeForm(s1);


	max.signForm(s2);
	max.executeForm(s2);

	isa.signForm(s3);
	tom.executeForm(s3);
	
	srand(time(0)); // to create a seed (this one depends on the date)
	RobotomyRequestForm r1 = RobotomyRequestForm("ra");

	cori.executeForm(r1);
	max.signForm(r1);
	isa.signForm(r1);

	tom.executeForm(r1);
	tom.executeForm(r1);
	tom.executeForm(r1);
	tom.executeForm(r1);
	
	cori.executeForm(r1);


	PresidentialPardonForm p1 = PresidentialPardonForm("p1");
	
	so.signForm(p1);
	isa.executeForm(p1);
	isa.signForm(p1);
	tom.executeForm(p1);
	isa.executeForm(p1);

	return SUCCESS;
}
