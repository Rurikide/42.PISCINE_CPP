#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp" // includes <string>

/* A C++ virtual function is a member function in the base class that you redefine in a derived class. 
It is declared using the virtual keyword. 
It is used to tell the compiler to perform dynamic linkage or late binding on the function. */

class ScavTrap : public ClapTrap { // public inheritance from base class ClapTrap

	private:
		ScavTrap( void );

	public:
		ScavTrap( const ScavTrap& rhs );
		ScavTrap( const std::string& name );
		virtual ~ScavTrap( void );

		ScavTrap& operator=( const ScavTrap& rhs );

		virtual void	attack( const std::string& target );

		void		guardGate( void );
};

#endif