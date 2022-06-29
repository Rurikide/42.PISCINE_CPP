/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 18:00:01 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/28 18:08:05 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp" // includes "Form.hpp" / "Bureaucrat.hpp"
#include "define.hpp"
#include <iostream>

PresidentialPardonForm::PresidentialPardonForm( void ) : Form("Presidential Pardon Form", "Target", 25, 5)
{
//	std::cout << "PresidentialPardonForm Default Constructor" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm& rhs ) : Form(rhs.getName(), rhs.getTarget(), rhs.getSignatureGrade(), rhs.getExecutionGrade())
{
//	std::cout << "PresidentialPardonForm Copy Constructor" << std::endl;
	*this = rhs;
}

PresidentialPardonForm::PresidentialPardonForm( const std::string& target ) : Form("Presidential Pardon Form", target, 25, 5)
{
//	std::cout << "PresidentialPardonForm Target Constructor" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm( void )
{
//	std::cout << "PresidentialPardonForm Default Destructor" << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=( const PresidentialPardonForm& rhs )
{
	(void)rhs;
	return *this;
}

void	PresidentialPardonForm::execute( const Bureaucrat& executor ) const
{
	if (this->formIsSigned() == false)
		throw Form::NotSignedException();
	if (executor.getGrade() > this->getExecutionGrade())
		throw Form::GradeExecuteTooLow();
	std::cout << SORAIRO << getTarget() << END_COLOR << " has been pardoned by " << MIDORI << "Zaphod Beeblebrox" << END_COLOR << std::endl;
}
