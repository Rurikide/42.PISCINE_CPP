#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCRETIONFORM_HPP

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
