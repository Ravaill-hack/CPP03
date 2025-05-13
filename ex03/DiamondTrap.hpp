
#ifndef DIAMONDTRAP_H
# define DIAMONDTRAP_H

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	public:
		DiamondTrap();
		virtual ~DiamondTrap();
		DiamondTrap(const DiamondTrap & toCopy);
		DiamondTrap & operator=(const DiamondTrap & toCopy);

		DiamondTrap(std::string name);

		void	whoAmI();

	private:
		std::string	_name;

};

#endif