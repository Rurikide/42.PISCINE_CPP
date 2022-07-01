/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 15:27:29 by tshimoda          #+#    #+#             */
/*   Updated: 2022/07/01 16:45:45 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "define.hpp"

int	main( void )
{
	Base*	base;

	base = generate();

	identify(base);

	identify(*base); // to send a reference of the Base* named base

	delete base;

	return SUCCESS;
}
