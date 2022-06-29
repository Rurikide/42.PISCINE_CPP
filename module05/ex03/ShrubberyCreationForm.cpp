/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 12:10:33 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/28 16:52:21 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp" // includes "Form.hpp" / "Bureaucrat.hpp"
#include "define.hpp"
#include <fstream> 
#include <iostream>

ShrubberyCreationForm::ShrubberyCreationForm( void ) : Form("Shrubbery Creation Form", "Target", 145, 137)
{
//	std::cout << "ShrubberyCreationForm Default Constructor" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm& rhs ) : Form(rhs.getName(), rhs.getTarget(), rhs.getSignatureGrade(), rhs.getExecutionGrade())
{
//	std::cout << "ShrubberyCreationForm Copy Constructor" << std::endl;
	*this = rhs;
}

ShrubberyCreationForm::ShrubberyCreationForm( const std::string& target ) : Form("Shrubbery Creation Form", target, 145, 137)
{
//	std::cout << "ShrubberyCreationForm Target Constructor" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm( void )
{
//	std::cout << "ShrubberyCreationForm Default Destructor" << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=( const ShrubberyCreationForm& rhs )
{
	(void)rhs;
	return *this;
}

void	ShrubberyCreationForm::execute( const Bureaucrat& executor ) const
{
	if (this->formIsSigned() == false)
		throw Form::NotSignedException();
	if (executor.getGrade() > this->getExecutionGrade())
		throw Form::GradeExecuteTooLow();
	std::ofstream file((getTarget() + "_shrubbery").c_str());
	if (file.is_open())
	{
		file << "\n"
		<<"               ,@@@@@@@,\n"
		<<"       ,,,.   ,@@@@@@/@@,  .oo8888o.\n"
		<<"    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o'\n"
		<<"   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n"
		<<"   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n"
		<<"   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n"
		<<"   `&%\\ ` /%&'    |.|        \\ '|8'\n"
		<<"       |o|        | |         | |\n"
		<<"       |.|        | |         | |\n"
		<<"    \\_/._\\//__/__/  ,\\__//__\\/.  \\_//__/_\n"
		<<"==========================================\n\n";
		file.close();
	}
}
