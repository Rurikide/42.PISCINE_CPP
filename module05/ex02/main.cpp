/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 13:07:31 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/28 16:47:00 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "define.hpp"
#include <iostream>

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

	return SUCCESS;
}
