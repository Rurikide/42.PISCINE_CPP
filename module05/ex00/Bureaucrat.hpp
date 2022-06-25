/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 16:18:25 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/25 17:06:11 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <stdexcept>

// subject specifies: Exception classes don't have to be designed in Orthodox Canonical Form

class Bureaucrat {

	private:
		const std::string	name_; // _name Names beginning with an underscore or a double underscore are RESERVED for the C++ implementers.

	public:
		//Bureaucrat( void ); // Default Constructor
		Bureaucrat( const std::string name ); // Name Constructor
		~Bureaucrat( void ); // Default Destructor
		
		Bureaucrat&	operator=( const Bureaucrat& rhs );


};

#endif
