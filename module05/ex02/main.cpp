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
	Bureaucrat so = Bureaucrat("Sophie", 2);
	Bureaucrat cori = Bureaucrat("Cori", 150);

	Form zero("Zero", 0, 0);
	Form one("One", 1, 1);
	Form fortyTwo("FortyTwo", 42, 42);
	Form basis("Basis", 150, 150);
	Form error("Error", 151, 151);


	zero.beSigned(isa);
	isa.signForm(zero);

	one.beSigned(isa);
	isa.signForm(one);

	so.signForm(fortyTwo);

	fortyTwo.beSigned(tom);
	fortyTwo.beSigned(isa);

	tom.signForm(fortyTwo);
	isa.signForm(fortyTwo);
	so.signForm(fortyTwo);

	basis.beSigned(cori);
	so.signForm(basis);



//	error.beSigned(cori);
//	cori.signForm(error);

	return SUCCESS;
}
