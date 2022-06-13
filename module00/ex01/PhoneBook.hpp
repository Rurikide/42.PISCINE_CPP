/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 12:03:44 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/13 14:45:55 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "Contact.hpp"

#define MAX_CAPACITY 8

class PhoneBook {

	private:
			Contact	list[MAX_CAPACITY];

	public: 
			PhoneBook( void );
			~PhoneBook( void );

			void	Add( void );
			void	Search( void );
			void	Detail( void );
};

#endif
