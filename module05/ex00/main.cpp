/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <tshimoda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 13:07:31 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/29 07:12:00 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "define.hpp"
#include <iostream>

int	main(void)
{
	try
	{
		Bureaucrat isa  = Bureaucrat("Isabelle", 1);
		Bureaucrat tom = Bureaucrat("Tom", 0);
		Bureaucrat so = Bureaucrat("Sophie", 43);
		Bureaucrat cori = Bureaucrat("Cori", 150);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	try
	{
		Bureaucrat isa  = Bureaucrat("Isabelle", 1);
		isa.getPromoted();
		std::cout << isa << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		Bureaucrat cori  = Bureaucrat("Cori", 150);
		cori.getDemoted();
		std::cout << cori << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		Bureaucrat tom  = Bureaucrat("Tom", 3);
		tom.getPromoted();
		std::cout << tom << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		Bureaucrat so  = Bureaucrat("Sophie", 43);
		so.getPromoted();
		std::cout << so << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return SUCCESS;
}
