
#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap();
		virtual ~ScavTrap();
		ScavTrap(const ScavTrap & toCopy);
		ScavTrap & operator=(const ScavTrap & other);

		ScavTrap(std::string name);

		void	guardGate();

	private:
		bool	_guardMode;
};

#endif