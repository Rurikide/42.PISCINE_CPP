/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 13:07:31 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/27 18:33:55 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "define.hpp"
#include <iostream>

int	main(void)
{
	Bureaucrat tom = Bureaucrat("Tom", 0);
	Bureaucrat isa  = Bureaucrat("Isabelle", 1);
	Bureaucrat so = Bureaucrat("Sophie", 43);
	Bureaucrat cori = Bureaucrat("Cori", 150);
	Bureaucrat mondello = Bureaucrat("Mondello", 3);
	Bureaucrat chalifour = Bureaucrat("Chalifour", 100);

	Form zero("Zero", 0, 0);
	Form one("One", 1, 1);
	Form fortyTwo("FortyTwo", 42, 42);
	Form basis("Basis", 150, 150);
	Form error("Error", 151, 151);

	zero.beSigned(isa);

	one.beSigned(isa);
	one.beSigned(cori);

	fortyTwo.beSigned(isa);
	fortyTwo.beSigned(so);


	basis.beSigned(isa);
	basis.beSigned(cori);

	isa.signForm(zero);
	isa.signForm(fortyTwo);
	cori.signForm(fortyTwo);


	return SUCCESS;
}
