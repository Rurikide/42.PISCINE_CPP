/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <tshimoda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 15:20:18 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/29 07:46:03 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp" // includes "Bureaucrat.hpp" // <string> <exception>
#include "define.hpp"
#include <iostream>

Form::Form( void ) : name_("Blank"), signatureGrade_(1), executionGrade_(1)
{
//	std::cout << "Form Default Constructor" << std::endl;
}

Form::Form( const std::string& name, const std::string& target, const size_t signatureGrade, const size_t executionGrade ) : name_(name), target_(target),  signatureGrade_(signatureGrade), executionGrade_(executionGrade)
{
//	std::cout << "Form Attributes Setting Constructor" << std::endl;

	this->signedBy_ = "";
	this->isSigned_ = false;
	this->isOutOfBound_ = false;
	this->checkGrade();
}

Form::Form( const Form& rhs ) : name_(rhs.getName()), target_(rhs.getTarget()), signatureGrade_(rhs.getSignatureGrade()), executionGrade_(rhs.getExecutionGrade())
{
//	std::cout << "Form Copy Constructor" << std::endl;
	*this = rhs;
}

Form::~Form( void )
{
//	std::cout << "Form Default Destructor" << std::endl;
}

Form& Form::operator=( const Form& rhs )
{
	this->signedBy_ = rhs.getSignature();
	this->isSigned_ = rhs.formIsSigned();
	this->isOutOfBound_ = rhs.formIsOutOfBound();
	return *this;
}

const std::string	Form::getName( void ) const
{
	return this->name_;
}

const std::string	Form::getSignature( void ) const
{
	return this->signedBy_;
}

const std::string	Form::getTarget( void ) const
{
	return this->target_;
}

bool	Form::formIsSigned( void ) const
{
	return this->isSigned_;
}

bool	Form::formIsOutOfBound( void ) const
{
	return this->isOutOfBound_;
}

size_t	Form::getSignatureGrade( void ) const
{
	return this->signatureGrade_;
}

size_t	Form::getExecutionGrade( void ) const
{
	return this->executionGrade_;
}

void	Form::beSigned( const Bureaucrat& bureaucrat )
{
	if (this->isSigned_ == true)
		throw Form::AlreadySignedException();
	if (this->isOutOfBound_ == true && (this->signatureGrade_ < HIGH || this->executionGrade_ < HIGH))
		throw Form::GradeTooHighException();
	if (this->isOutOfBound_ == true && (this->signatureGrade_ > LOW || this->executionGrade_ > LOW))
		throw Form::GradeTooLowException();
	if (bureaucrat.getGrade() > this->getSignatureGrade())
		throw Form::GradeSignatureTooLow();
	this->isSigned_ = true;
	this->signedBy_ = bureaucrat.getName();
}

void	Form::checkGrade( void )
{
		if (this->signatureGrade_ < HIGH || this->executionGrade_ < HIGH)
		{
			this->isOutOfBound_ = true;
		}
		if (this->signatureGrade_ > LOW || this->executionGrade_ > LOW)
		{
			this->isOutOfBound_ = true;
		}
}

const char*	Form::GradeTooHighException::what() const throw() 
{
	return "This form cannot be signed, since its grade level is above 1";
}

const char*	Form::GradeTooLowException::what() const throw()
{
	return "This form cannot be signed, since its grade level is below 150";
}

const char*	Form::GradeSignatureTooLow::what() const throw() 
{
	return " cannot sign this form, because its bureaucrat grade is too low";
}

const char*	Form::GradeExecuteTooLow::what() const throw() 
{
	return " cannot execute this form, because its bureaucrat grade is too low";
}

const char*	Form::GradeInvalidException::what() const throw() // for Bureaucrat.signForm()
{
	return "This form cannot be signed, since it has invalid grade level";
}

const char*	Form::AlreadySignedException::what() const throw()
{
	return ", because it has already been signed";
}

const char*	Form::NotSignedException::what() const throw()
{
	return " cannot execute, because the form is not signed";
}

std::ostream& operator<<( std::ostream& s, const Form& rhs )
{
	s << std::endl << "[] Name of the form: " << rhs.getName() << " | Target: " << rhs.getTarget() << " | isSigned: " << (rhs.formIsSigned() ? "yes" : "no") << " | signatureGrade: " << rhs.getSignatureGrade() << " | executionGrade: " << rhs.getExecutionGrade() << " []" << std::endl;

	return s;
}
