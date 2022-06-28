/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 12:11:11 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/27 14:17:47 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "define.hpp"
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
	try
	{
		if (this->grade_ < HIGH || this->grade_ > LOW)
		{
			this->grade_ = 42;
			throw Bureaucrat::GradeInvalidException();
		}
	}
	catch (Bureaucrat::GradeInvalidException& e)
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
	return "Grade is out of range. Setting it to grade 42";
}

std::ostream& operator<<( std::ostream& s, const Bureaucrat& rhs )
{
	s << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() ; return s;
}