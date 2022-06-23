/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 16:19:41 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/23 11:11:18 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "define.hpp"
#include <iostream>

int	main( void )
{
	Animal koala;

	const Animal *fido = new Dog();
	const Animal *felix = new Cat();
	
	koala.makeSound();

	fido->makeSound();

	felix->makeSound();

	std::cout << MIDORI << "koala's type: " << koala.getType() << END_COLOR << std::endl;
	std::cout << AIZOME << "fido's type: " << fido->getType() << END_COLOR << std::endl;
	std::cout << KIIRO <<  "felix's type: " << felix->getType() << END_COLOR << std::endl;

	delete fido;
	delete felix;


	/*EXAMPLE FROM THE PDF*/
	std::cout << "EXEMPLE FROM THE MAIN" << std::endl;

	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	
	std::cout << j->getType() << " " << std::endl; std::cout << i->getType() << " " << std::endl; i->makeSound(); //will output the cat sound! j->makeSound();
	meta->makeSound();

	return SUCCESS;
}
