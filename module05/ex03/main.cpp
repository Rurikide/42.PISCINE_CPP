/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 13:07:31 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/29 10:00:34 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "define.hpp"
#include <iostream>
#include <stdlib.h> // srand();

// ShrubberyCreationForm signature 145, execute 137
// RobotomyRequestForm	signature 72, execute 45
// PresidentialPardonForm signature 25, execute 5

int	main(void)
{
	Intern	someRandomIntern;
	Form*	rrf1;
//	Form*	rrf2;
//	Form*	rrf3;
//	Form*	rrf4;
//	Form*	rrf5;

	//Intern attempts to create a form before Bureaucrat use them
	
	rrf1 = someRandomIntern.makeForm("shrubbery creation", "Aube");
//	rrf2 = someRandomIntern.makeForm("robotomy request", "Badia");
//	rrf3 = someRandomIntern.makeForm("presidential pardon", "Collette");
//	rrf4 = someRandomIntern.makeForm("presidential request", "Founier");
//	rrf5 = someRandomIntern.makeForm("robotomy pardon", "Leblanc");
	
	Bureaucrat isa = Bureaucrat("Isabelle", 1);
//	Bureaucrat tom = Bureaucrat("Tom", 3);
//	Bureaucrat so = Bureaucrat("Sophie", 42);
//	Bureaucrat cori = Bureaucrat("Cori", 100);
//	Bureaucrat max = Bureaucrat("Mondello", 150);


	if (rrf1 == NULL)
		return FAIL;
	isa.signForm(*rrf1);
	isa.executeForm(*rrf1);
	delete rrf1;

/*
	if (rrf2 == NULL)
		return FAIL;
	srand(time(0));
	tom.signForm(*rrf2);
	isa.executeForm(*rrf2);
	delete rrf2;
*/

/*
	if (rrf3 == NULL)
		return FAIL;
	so.signForm(*rrf3);
	isa.executeForm(*rrf3);
	delete rrf3;
*/

/*
	if (rrf4 == NULL)
		return FAIL;
	cori.signForm(*rrf4);
	isa.executeForm(*rrf4);
	delete rrf4;
*/

/*
	if (rrf5 == NULL)
		return FAIL;
	max.signForm(*rrf5);
	isa.executeForm(*rrf5);
	delete rrf5;
*/
	return SUCCESS;
}
