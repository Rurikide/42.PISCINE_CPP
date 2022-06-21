#ifndef SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap { // inheritance

	public:
		ScavTrap( void );
		ScavTrap( const ScavTrap& rhs );
		ScavTrap( const std::string& name );
		virtual ~ScavTrap( void );

		ScavTrap& operator=( const ScavTrap& rhs );
};
