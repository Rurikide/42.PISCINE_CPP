/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 12:49:10 by tshimoda          #+#    #+#             */
/*   Updated: 2022/06/23 16:46:52 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>
#define CAPACITY 100

class Brain {

	private:
		std::string _ideas[CAPACITY];

	public:
			Brain( void );
			Brain( const Brain& rhs );
			~Brain( void );

			Brain& operator=( const Brain& rhs );

			const std::string&	getIdea( const size_t nb ) const; // returns a reference, not a shallow copy of the pointer
			void	printIdeas( void ) const;
			void	setIdeas( const std::string& idea ); // set by reference to perform deepcopy
};

#endif
