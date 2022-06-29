/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 10:47:29 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/28 16:30:05 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
	private:
		ShrubberyCreationForm( void );

	public:
		ShrubberyCreationForm( const ShrubberyCreationForm& rhs );
		ShrubberyCreationForm( const std::string& target );
		virtual ~ShrubberyCreationForm( void );

		ShrubberyCreationForm& operator=( const ShrubberyCreationForm & rhs );

		virtual void	execute( const Bureaucrat& executor ) const;
};

#endif
