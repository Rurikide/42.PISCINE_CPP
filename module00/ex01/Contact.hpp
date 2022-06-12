/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 16:10:54 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/12 16:40:22 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
#define CONTACT_H

class Contact {

	private:
		std::string	firstName;
		std::string	lastName;
		std::string	phoneNumber;
		std::string	darkestSecret;

	public:
		Contact( void );
		~Contact( void );

		std::string	getFirstName( void ) const;
		std::string	getLastName( void ) const;
		std::string	getPhoneNumber( void ) const;
		std::string	getDarkestSecret( void ) const;
		
		void		setFirstName(std::string firstName);
		void		setLastName(std::string lastName);
		void		setPhoneNumber(std::string phoneNumber);
		void		setDarkestSecret(std::string darkestSecret);
		
		bool		validNameString(std::string nameString);
		bool		validPhoneNumber(std::string phoneNumber);
};

#endif
