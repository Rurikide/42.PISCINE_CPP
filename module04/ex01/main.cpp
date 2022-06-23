/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 16:19:41 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/23 16:48:42 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "define.hpp"
#include <iostream>

int	main( void )
{

	Animal *animalArray[CAPACITY];

	for (int nb = 0; nb < CAPACITY; nb += 2)
	{
		animalArray[nb] = new Cat();
		if (CAPACITY % 2 == 0)
			animalArray[nb + 1] = new  Dog();
	}

	for (int nb = 0; nb < CAPACITY; nb++)
		animalArray[nb]->makeSound();

	for	(int nb = 0; nb < CAPACITY; nb++)
		delete animalArray[nb];

	Cat garfield;

	garfield.getBrain()->setIdeas("lasagna");

	std::cout << KIIRO << "Garfield " << END_COLOR << std::endl; 
	garfield.getBrain()->printIdeas();
	

	return SUCCESS;
}
