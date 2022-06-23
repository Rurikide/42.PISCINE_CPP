/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 16:19:41 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/23 12:29:28 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "define.hpp"
#include <iostream>

int	main( void )
{
	Animal francis;
	const Animal *fido = new Dog();
	const Animal *felix = new Cat();
	

	std::cout << MIDORI << "francis's type: " << francis.getType() << END_COLOR << std::endl;
	francis.makeSound();
	

	std::cout << AIZOME << "fido's type: " << fido->getType() << END_COLOR << std::endl;
	fido->makeSound();


	std::cout << KIIRO <<  "felix's type: " << felix->getType() << END_COLOR << std::endl;
	felix->makeSound();


	delete fido;
	delete felix;


	/*WRONG SECTION*/
	std::cout << "\vTESTING WRONG FILES\v" << std::endl;

	WrongAnimal teddy;
	WrongAnimal *ribbon = new WrongCat();
	const WrongCat *bayard = new WrongCat();

	std::cout << "\v[TEDDY]" << std::endl;
	std::cout << "type: " << teddy.getType() << std::endl;
	std::cout << "makeSound: " << std::endl;
	teddy.makeSound();

	std::cout << "\v[RIBBON]" << std::endl;
	std::cout << "type: " << ribbon->getType() << std::endl;
	std::cout << "makeSound: " << std::endl;
	ribbon->makeSound();

	std::cout << "\v[BAYARD]" << std::endl;
	std::cout << "type: " << bayard->getType() << std::endl;
	std::cout << "makeSound: " << std::endl;
	bayard->makeSound();
	
	std::cout << std::endl;

	delete ribbon;
	delete bayard;

	return SUCCESS;
}
