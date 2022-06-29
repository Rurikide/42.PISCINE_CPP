/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <tshimoda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 12:11:11 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/29 07:39:08 by tshimoda         ###   ########.fr       */
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
	if (this->grade_ <= HIGH)
	{
		throw Bureaucrat::GradeTooHighException(); // if throw, won't do this->grade_++;
	}
	this->grade_--;
}

void	Bureaucrat::getDemoted( void )
{
	if (this->grade_ >= LOW)
	{
		throw Bureaucrat::GradeTooLowException(); // if throw, won't do the this->grade_--;
	}
	this->grade_++;
}

void	Bureaucrat::checkGrade( void )
{
	if (this->grade_ < HIGH || this->grade_ > LOW)
	{
		throw Bureaucrat::GradeInvalidException();
	}
}

void	Bureaucrat::signForm( Form& form ) const
{
	try
	{
		form.beSigned(*this);
	}
	catch (std::exception& e)
	{
		std::cout << MIDORI << this->getName() << END_COLOR << AKAI << e.what() << END_COLOR << std::endl;
		return ;
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
	return "Grade is out of range. Setting it to grade 42";
}

const char* Bureaucrat::ImposteurException::what() const throw()
{
	return " didn't sign the form ";
}

std::ostream& operator<<( std::ostream& s, const Bureaucrat& rhs )
{
	s << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() ; return s;
}
