#include "ShrubberyCreationForm.hpp" // includes "Form.hpp" / "Bureaucrat.hpp"
#include <fstream> // file.isopen(); file << // std::ofstream file((getTarget() + "_shrubbery").c_str());

#define SSIGN 147
#define SEXEC 137

ShrubberyCreationForm::ShrubberyCreationForm( void )
{
	std::cout << "ShrubberyCreationForm Default Constructor" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm& rhs ) : Form(rhs.getName(), rhs.getTarget(), rhs.getSignatureGrade(), rhs.getExecutionGrade())
{
	std::cout << "ShrubberyCreationForm Copy Constructor" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( const std::string& target )
{
	std::cout << "ShrubberyCreationForm Target Constructor" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm( void )
{
	std::cout << "ShrubberyCreationForm Default Destructor" << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=( const ShrubberyCreationForm{
	//

	return *this;
}
