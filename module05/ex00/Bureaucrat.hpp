/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 16:18:25 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/26 16:49:04 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <stdexcept>

#define HIGH 1
#define LOW 150


class Bureaucrat {

	private:
		const std::string	name_; // attributes beginning with an underscore or a double underscore are RESERVED for the C++ implementers.
		size_t	grade_; 

		Bureaucrat( void ); // Default Constructor, name_ is const, do I don't want this constructor to be called

	public:
		Bureaucrat( const std::string name, size_t grade ); // const name_ & grad e_ Constructor
		Bureaucrat( const Bureaucrat& rhs ); // Copy Constructor
		~Bureaucrat( void ); // Default Destructor
		
		Bureaucrat&	operator=( const Bureaucrat& rhs );

		const std::string	getName( void ) const;
		const size_t	getGrade( void ) const;
		void	getPromoted( void );
		void	getDemoted( void );
		
		// NESTED EXCEPTION CLASSES
		// subject specifies: Exception classes don't have to be designed in Orthodox Canonical Form
		class GradeTooHighException : public std::exception
		{
			public: virtual const std::string what( void ) const throw( void );
		}

		class GradeTooLowException : public std::exception
		{
			public: virtual const std::string what( void ) const throw( void );
		}
};

std::ostream& operator<<( std::ostream& s, const Bureaucrat& rhs );

#endif
