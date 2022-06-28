/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 17:16:03 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/28 17:18:49 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
	private:
		RobotomyRequestForm( void );

	public:
		RobotomyRequestForm( const RobotomyRequestForm& rhs );
		RobotomyRequestForm( const std::string& target );
		virtual ~RobotomyRequestForm( void );

		RobotomyRequestForm& operator=( const RobotomyRequestForm & rhs );

		virtual void	execute( const Bureaucrat& executor ) const;
};

#endif
