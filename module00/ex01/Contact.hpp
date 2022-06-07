/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 16:10:54 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/07 16:32:01 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
#define CONTACT_H

class Contact {

	private:
			char*	FirstName;
			char*	LastName;
			char*	PhoneNumber;
			char*	DarkestSecret;

	public:
			Contact( void );
			~Contact( void );

			char*	getFirstName( void ) const;
			char*	getLastName( void ) const;
			char*	getPhoneNumber( void ) const;
			char*	getDarkestSecret( void ) const;

			void	setFirstName(char* FirstName);
			void	setLastName(char* LastName);
			void	setPhoneNumber(char* PhoneNumber);
			void	setDarkestSecret(char *DarkestSecret);

};

#endif
