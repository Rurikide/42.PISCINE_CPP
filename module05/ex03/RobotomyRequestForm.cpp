/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 17:33:43 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/28 18:15:46 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp" // includes "Form.hpp" / "Bureaucrat.hpp"
#include "define.hpp"
#include <iostream>

#include <cstdlib> // rand()

RobotomyRequestForm::RobotomyRequestForm( void ) : Form("Robotomy Request Form", "Target", 72, 45)
{
	//std::cout << "RobotomyRequestForm Default Constructor" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm& rhs ) : Form(rhs.getName(), rhs.getTarget(), rhs.getSignatureGrade(), rhs.getExecutionGrade())
{
	//std::cout << "RobotomyRequestForm Copy Constructor" << std::endl;
	*this = rhs;
}

RobotomyRequestForm::RobotomyRequestForm( const std::string& target ) : Form("Robotomy Request Form", target, 72, 45)
{
	//std::cout << "RobotomyRequestForm Target Constructor" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm( void )
{
	//std::cout << "RobotomyRequestForm Default Destructor" << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=( const RobotomyRequestForm& rhs )
{
	(void)rhs;
	return *this;
}

void	RobotomyRequestForm::execute( const Bureaucrat& executor ) const
{
	if (this->formIsSigned() == false)
		throw Form::NotSignedException();
	if (executor.getGrade() > this->getExecutionGrade())
		throw Form::GradeExecuteTooLow();
	std::cout << KIIRO << "* makes drilling noises *" << END_COLOR << std::endl;
	if (rand() % 2 == SUCCESS)
	{
		std::cout << SORAIRO << this->getTarget() << END_COLOR << MOMOIRO << " has been robotomized successfully" << END_COLOR << std::endl;
	}
	else
	{
		std::cout << SORAIRO << this->getTarget() << END_COLOR << AKAI << " robotomization failed" << END_COLOR << std::endl;
	}
}
