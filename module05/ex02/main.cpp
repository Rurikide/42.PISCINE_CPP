/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 13:07:31 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/28 16:22:09 by tshimoda         ###   ########.fr       */
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

	s1.beSigned(isa);
	cori.executeForm(s1);


	s2.beSigned(max);
	s2.execute(max);

	s3.beSigned(tom);
	s3.execute(cori);

	return SUCCESS;
}
