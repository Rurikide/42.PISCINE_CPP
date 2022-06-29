/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 17:25:03 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/28 17:28:56 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"

class Intern 
{
	private:
		struct {
			std::string formClass;
			Form* (Intern::*formExecute)( const std::string& target ) const;
		} mode[3];
		
		Form* makeShrubbery( const std::string& target ) const;
		Form* makeRobotomy( const std::string& target ) const;
		Form* makePresidential( const std::string& target ) const;

	public:
		Intern( void );
		Intern( const Intern& rhs );
		virtual ~Intern( void );

		Intern& operator=( const Intern & rhs );

		Form*	makeForm( const std::string& formClass, const std::string& target ) const;
};

#endif
