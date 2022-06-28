/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 13:07:31 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/28 15:54:03 by tshimoda         ###   ########.fr       */
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
	Bureaucrat isa;
	Bureaucrat tom;
	Bureaucrat so;
	Bureaucrat cori;
	Bureaucrat max;

	try
	{
		isa = Bureaucrat("Isabelle", 1);
		tom = Bureaucrat("Tom", 42);
		so = Bureaucrat("Sophie", 75);
		cori = Bureaucrat("Cori", 145);
		max = Bureaucrat("Maxime", 151);
	}
	catch
	{

	}

	
	ShrubberyCreationForm s1 = ShrubberyCreationForm("sa");
	ShrubberyCreationForm s2 = ShrubberyCreationForm("sb");
	ShrubberyCreationForm s3 = ShrubberyCreationForm("sc");

	s1.beSigned(isa);
	s1.execute(so);
	cori.executeForm(s1);


	//s2.beSigned(max);
	//s2.execute(max);

	//s3.beSigned(tom);
	//s3.execute(cori);

	return SUCCESS;
}
