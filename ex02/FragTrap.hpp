
#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap();
		virtual ~FragTrap();
		FragTrap(const FragTrap & to_copy);
		FragTrap & operator=(const FragTrap & other);

		FragTrap(std::string name);

		void	highFivesGuys();
};

#endif