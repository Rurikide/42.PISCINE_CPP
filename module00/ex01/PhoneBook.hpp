/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 12:03:44 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/08 15:15:48 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#define SUCCESS 0

#include "Contact.hpp"

class PhoneBook {

	private:
			Contact	list[8];

	public: 
			PhoneBook( void );
			~PhoneBook( void );
			
			//int Command( void );
			int	Add( void );
			int	Search( void );
			int	Exit( void );
};

#endif
