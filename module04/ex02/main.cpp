/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 16:19:41 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/23 19:14:35 by tshimoda         ###   ########.fr       */
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
	//Animal fruitbat;
	//fruitbat.makeSound();

	Cat garfield;
	garfield.makeSound();

	Dog	beethoven;
	beethoven.makeSound();

	return SUCCESS;
}
