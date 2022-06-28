/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 14:26:34 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/27 18:07:45 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Form {

	private: 
		Form( void );

		const std::string	name_;
		std::string		signedBy_;
		bool				isSigned_;
		bool				isOutOfBound_;
		const size_t		signatureGrade_;
		const size_t		executionGrade_;

	public:
		Form( const std::string& name, const size_t signatureGrade, const size_t executionGrade );
		Form( const Form& rhs );
		~Form( void );

		Form& operator=( const Form& rhs );

		const std::string	getName( void ) const;
		const std::string	getSignature( void ) const;
		bool			formIsSigned( void ) const;
		bool			formIsOutOfBound( void ) const;
		size_t			getSignatureGrade( void ) const;
		size_t			getExecutionGrade( void ) const;
		void			beSigned( const Bureaucrat& bureaucrat );
		void			checkGrade	( void );

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
		class GradeInvalidException : public std::exception
		{
			public: virtual const char* what() const throw();
		};
		class AlreadySignedException : public std::exception
		{
			public: virtual const char* what() const throw();
		};
};

std::ostream& operator<<( std::ostream& s, const Form& rhs );

#endif
