/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 12:11:11 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/28 15:59:08 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "define.hpp"
#include "Form.hpp"
#include <iostream>


/*----------------------------CONSTRUCTORS-DESTRUCTOR----------------------------*/

Bureaucrat::Bureaucrat( void ) : name_("Nameless"), grade_(LOW)
{
	std::cout << "Bureaucrat Default Constructor" << std::endl;
}

Bureaucrat::Bureaucrat( const std::string name, size_t grade ) : name_(name), grade_(grade)
{
	std::cout << "Bureaucrat Name & Grade Constructor" << std::endl;
	this->checkGrade();
}

Bureaucrat::Bureaucrat( const Bureaucrat& rhs ) : name_(rhs.getName())
{
	std::cout << "Bureaucrat Copy Constructor" << std::endl;
	*this = rhs;
}

Bureaucrat::~Bureaucrat( void )
{
	std::cout << "Bureaucrat Default Destructor" << std::endl;
}

Bureaucrat& Bureaucrat::operator=( const Bureaucrat& rhs )
{
	this->grade_ = rhs.getGrade();
	return *this;
}

const std::string	Bureaucrat::getName( void ) const
{
	return this->name_;
}

size_t	Bureaucrat::getGrade( void ) const
{
	return this->grade_;
}

void	Bureaucrat::getPromoted( void )
{
	try
	{
		if (this->grade_ <= HIGH)
		{
			throw Bureaucrat::GradeTooHighException(); // if throw, won't do this->grade_++;
		}
		this->grade_--;
	}
	catch (Bureaucrat::GradeTooHighException& e)
	{
		std::cout << e.what() << std::endl;
	}
}

void	Bureaucrat::getDemoted( void )
{
	try
	{
		if (this->grade_ >= LOW)
		{
			throw Bureaucrat::GradeTooLowException(); // if throw, won't do the this->grade_--;
		}
		this->grade_++;
	}
	catch (Bureaucrat::GradeTooLowException& e)
	{
		std::cout << e.what() << std::endl;
	}
}

void	Bureaucrat::checkGrade( void )
{
	if (this->grade_ < HIGH || this->grade_ > LOW)
	{
		throw Bureaucrat::GradeInvalidException();
	}
	//catch (Bureaucrat::GradeInvalidException& e)
	//{
	//	std::cout << e.what() << std::endl;
	//}
}

void	Bureaucrat::signForm( const Form& form ) const
{
	if (this->grade_ <= form.getSignatureGrade() && form.formIsSigned() == true)
	{
		try
		{
			if (this->name_ != form.getSignature())
				throw Bureaucrat::ImposteurException();
		}
		catch (Bureaucrat::ImposteurException& e)
		{
			std::cout << MIDORI << this->name_ << END_COLOR << AKAI << e.what() << END_COLOR << SORAIRO << form.getName() << END_COLOR << ". " << MIDORI << form.getSignature() << END_COLOR << " did." << std::endl; return ;
		}

		std::cout << MIDORI << this->name_ << END_COLOR << " signed the form " << SORAIRO << form.getName() << END_COLOR << std::endl;
	}
	else if (form.formIsOutOfBound() == true)
		std::cout << AKAI << "Nobody could sign the form " << END_COLOR << SORAIRO << form.getName() << END_COLOR << AKAI <<  " since it has invalid grade requirements" << END_COLOR << std::endl;
	else if (this->grade_ <= form.getSignatureGrade() && form.formIsSigned() == false)
		std::cout << MIDORI << this->name_ << END_COLOR << " has a grade high enough to sign the form " << SORAIRO << form.getName() << END_COLOR << " but didn't sign it yet" << std::endl;
	else
		std::cout << MIDORI << this->name_ << END_COLOR << AKAI << " couldn't sign the form " << END_COLOR << SORAIRO << form.getName() << END_COLOR << AKAI << " because its bureaucrat grade is too low" << END_COLOR << std::endl; 
}

void	Bureaucrat::executeForm( const Form& form ) const
{
	try
	{
		form.execute(*this);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}


const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Cannot promote since grade is too high";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() 
{
	return "Cannot demote since grade is too low";
}

const char* Bureaucrat::GradeInvalidException::what() const throw()
{
	return "Grade is out of range";
}

const char* Bureaucrat::ImposteurException::what() const throw()
{
	return " didn't sign the form ";
}

std::ostream& operator<<( std::ostream& s, const Bureaucrat& rhs )
{
	s << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() ; return s;
}
