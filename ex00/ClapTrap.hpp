
#ifndef CLAPTRAP_CPP
# define CLAPTRAP_CPP

# include <iomanip>
# include <iostream>
# include <string>

class ClapTrap
{
	public:
		ClapTrap();
		~ClapTrap();
		ClapTrap(ClapTrap const & toCopy);
		ClapTrap & operator=(const ClapTrap & other);
	
		ClapTrap(std::string name);

		void			attack(const std::string & target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
	
		std::string		getName() const;
		unsigned int	getHitPoints() const;
		unsigned int	getNrjPoints() const;
		unsigned int	getAttckDamage() const;

		void			setName(std::string name);
		void			setHitPoints(unsigned int hitPoints);
		void			setNrjPoints(unsigned int nrjPoints);
		void			setAttckDamage(unsigned int attckDamage);

		void			announce() const;

	private:
		std::string		_name;
		unsigned int	_hitPoints;
		unsigned int	_nrjPoints;
		unsigned int	_attckDamage;
};

#endif