/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 14:09:51 by tshimoda          #+#    #+#             */
/*   Updated: 2022/07/01 14:41:23 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdint> // uintptr_t datatype
#include <iostream>
#include "Serialization.hpp"
#include "define.hpp"


uintptr_t	serialize(Data* ptr)
{
	uintptr_t result = reinterpret_cast<uintptr_t>(ptr);

	return result;
}

Data*	deserialize(uintptr_t raw)
{
	Data*	reverse = reinterpret_cast<Data*>(raw);

	return reverse;
}

int	main(void)
{
	Data* object = new Data;

	object->type = "Jade Dragon Sculpture";
	object->yearOfCreation = 1042;
	object->value = 18000000000;
	
	std::cout << "Object address: " << MIDORI << object << END_COLOR << std::endl;
	std::cout << "Object type: " << MIDORI << object->type << END_COLOR << std::endl;
	std::cout << "Object year of creation: circa " << MIDORI << object->yearOfCreation << END_COLOR << std::endl;
	std::cout << "Object value: " << MIDORI << object->value << "$" << END_COLOR << std::endl;
	
	uintptr_t serializedObject = serialize(object);

	Data* deserializedObject = deserialize(serializedObject);
	
	std::cout << "dObject address: " << MIDORI << deserializedObject << END_COLOR << std::endl;
	std::cout << "dObject type: " << MIDORI << deserializedObject->type << END_COLOR << std::endl;
	std::cout << "dObject year of creation: circa " << MIDORI << deserializedObject->yearOfCreation << END_COLOR << std::endl;
	std::cout << "dObject value: " << MIDORI << deserializedObject->value << "$" << END_COLOR << std::endl;

	delete object;


	return SUCCESS;
}
