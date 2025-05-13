
#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:
		FragTrap();
		virtual ~FragTrap();
		FragTrap(const FragTrap & toCopy);
		FragTrap & operator=(const FragTrap & other);

		FragTrap(std::string name);

		void	highFivesGuys();
};

#endif