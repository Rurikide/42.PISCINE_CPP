/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <tshimoda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 13:07:31 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/29 07:43:34 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "define.hpp"
#include <iostream>

int	main(void)
{
	Bureaucrat isa  = Bureaucrat("Isabelle", 1);
	Bureaucrat tom = Bureaucrat("Tom", 3);
	Bureaucrat so = Bureaucrat("Sophie", 42);
	Bureaucrat cori = Bureaucrat("Cori", 150);

	try
	{
		Form zero("Zero", 0, 0);
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
	Form one("One", 1, 1);
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}


	try
	{	
		Form error("Error", 42, 151);
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	Form one("One", 1, 1);
	Form fortyTwo("FortyTwo", 42, 42);
	Form basis("Basis", 18, 100);
	Form bocal("Bocal", 100, 150);


	tom.signForm(one);
	isa.signForm(one);

	so.signForm(fortyTwo);
	isa.signForm(fortyTwo);

	cori.signForm(basis);

	std::cout << one << std::endl;
	std::cout << fortyTwo << std::endl;
	std::cout << basis << std::endl;
	std::cout << bocal << std::endl;

	return SUCCESS;

}
