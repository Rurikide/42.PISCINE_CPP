/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 16:22:53 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/07 16:36:27 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

Contact::Contact( void ) {

	std::cout << "Contact Constructor called" << std::endl;
	return;
}

Contact::~Contact( void ) {

	std::cout << "Contact Destructor called" << std::endl;
	return;
}
