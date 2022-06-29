/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 17:25:03 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/28 17:28:56 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
	private:
		PresidentialPardonForm( void );

	public:
		PresidentialPardonForm( const PresidentialPardonForm& rhs );
		PresidentialPardonForm( const std::string& target );
		virtual ~PresidentialPardonForm( void );

		PresidentialPardonForm& operator=( const PresidentialPardonForm & rhs );

		virtual void	execute( const Bureaucrat& executor ) const;
};

#endif
