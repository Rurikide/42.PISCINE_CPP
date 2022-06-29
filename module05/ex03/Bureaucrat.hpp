/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 16:18:25 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/28 16:43:22 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <exception>

#define HIGH 1
#define LOW 150

class Form;

class Bureaucrat {

	private:
		const std::string	name_;
		size_t	grade_;

		Bureaucrat( void );

	public:
		Bureaucrat( const std::string name, size_t grade );
		Bureaucrat( const Bureaucrat& rhs );
		~Bureaucrat( void );
		
		Bureaucrat&	operator=( const Bureaucrat& rhs );

		const std::string	getName( void ) const;
		size_t	getGrade( void ) const;
		void	getPromoted( void );
		void	getDemoted( void );
		void	checkGrade( void );
		void	signForm( Form& form ) const;
		void	executeForm( const Form& form ) const;

		class GradeTooHighException : public std::exception
		{
			public: virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public: virtual const char* what() const throw();
		};
		class GradeInvalidException : public std::exception
		{
			public: virtual const char* what() const throw();
		};
		class ImposteurException : public std::exception
		{
			public: virtual const char* what() const throw();
		};
};

std::ostream& operator<<( std::ostream& s, const Bureaucrat& rhs );

#endif
