#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include "Define.hpp"

class ClapTrap {

	private:
		std::string	_name;
		unsigned int		_hitPoint;
		unsigned int		_energyPoint;
		unsigned int		_attackDamage;
	public:
		ClapTrap( void );
		ClapTrap( ClapTrap const & src );
		ClapTrap( std::string const & name );
		~ClapTrap( void );

		ClapTrap& operator=( ClapTrap const & rhs );

		void	attack( std::string& const target ) const;
		void	takeDamage( unsigned int amount );
		void	beRepaired( unsigned int amount );
};

#endif
