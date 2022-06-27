/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 13:07:31 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/27 13:44:24 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "define.hpp"
#include <iostream>

int	main(void)
{
	Bureaucrat tom = Bureaucrat("Tom", 0);
	Bureaucrat isa  = Bureaucrat("Isabelle", 1);
	Bureaucrat so = Bureaucrat("Sophie", 43);
	Bureaucrat cori = Bureaucrat("Cori", 150);

	tom.getDemoted();
	isa.getPromoted();
	so.getPromoted();
	cori.getDemoted();

	std::cout << tom << std::endl;
	std::cout << isa << std::endl;
	std::cout << so << std::endl;
	std::cout << cori << std::endl;

	return SUCCESS;
}
