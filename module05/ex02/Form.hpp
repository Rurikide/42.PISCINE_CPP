/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 14:26:34 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/28 14:41:44 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Form {

	private: 
		Form( void );

		const std::string	name_;
		std::string		signedBy_; // this one is not const and it's normal
		const std::string	target_;	
		bool				isSigned_;
		bool				isOutOfBound_;
		const size_t		signatureGrade_;
		const size_t		executionGrade_;

	public:
		Form( const std::string& name, const std::string& target, const size_t signatureGrade, const size_t executionGrade );
		Form( const Form& rhs );
		virtual ~Form( void );

		Form& operator=( const Form& rhs );

		const std::string	getName( void ) const;
		const std::string	getSignature( void ) const;
		const std::string	getTarget( void ) const;
		bool			formIsSigned( void ) const;
		bool			formIsOutOfBound( void ) const;
		size_t			getSignatureGrade( void ) const;
		size_t			getExecutionGrade( void ) const;
		void			beSigned( const Bureaucrat& bureaucrat );
		void			checkGrade	( void );
		
		// The base class Form is now an abstract class!
		virtual void	execute( const Bureaucrat& executor ) const = 0;

		class GradeTooHighException : public std::exception
		{
			public: virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public: virtual const char* what() const throw();
		};
		class GradeSignatureTooLow : public std::exception
		{
			public: virtual const char* what() const throw();
		};
		class GradeExecuteTooLow : public std::exception
		{
			public: virtual const char* what() const throw();
		};
		class GradeInvalidException : public std::exception
		{
			public: virtual const char* what() const throw();
		};
		class AlreadySignedException : public std::exception
		{
			public: virtual const char* what() const throw();
		};
		class NotSignedException : public std::exception
		{
			public: virtual const char* what() const throw();
		};
};

std::ostream& operator<<( std::ostream& s, const Form& rhs );

#endif
