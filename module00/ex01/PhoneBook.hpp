/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 12:03:44 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/07 16:42:57 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "Contact.hpp"

class PhoneBook {

	private:
			Contact	array_contact[8];

	public: 
			PhoneBook( void );
			~PhoneBook( void );

			int	Add(char* user_input);
			int	Search(char* user_input);
			int	Exit(char* user_input);
};

#endif
