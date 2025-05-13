/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmatkows <lmatkows@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 11:08:41 by lmatkows          #+#    #+#             */
/*   Updated: 2025/05/13 14:32:03 by lmatkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << std::endl;
	std::cout << "ScavTrap default constructor called" << std::endl;
	setHitPoints(100);
	setNrjPoints(50);
	setAttckDamage(20);	
	_guardMode = false;
}

ScavTrap::~ScavTrap()
{
	std::cout << std::endl;
	std::cout << "ScavTrap destructor called" << std::endl;
}
ScavTrap::ScavTrap(const ScavTrap & toCopy) : ClapTrap(toCopy)
{
	std::cout << std::endl;
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = toCopy;
}
		
ScavTrap & ScavTrap::operator=(const ScavTrap & other)
{
	std::cout << std::endl;
	std::cout << "ScavTrap assignation operator called" << std::endl;
	if (this != &other)
	{
		setName(other.getName());
		setHitPoints(other.getHitPoints());
		setNrjPoints(other.getNrjPoints());
		setAttckDamage(other.getAttckDamage());
		_guardMode = other._guardMode;
	}
	return (*this);
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << std::endl;
	std::cout << "ScavTrap name constructor called" << std::endl;
	setHitPoints(100);
	setNrjPoints(50);
	setAttckDamage(20);	
	_guardMode = false;
} 

void	ScavTrap::guardGate()
{
	std::cout << std::endl;
	if (_guardMode == false)
	{
		std::cout << "ScavTrap " << getName() << " : Gate keeper mode enabled" << std::endl;
		_guardMode = true;
	}
	else
	{
		std::cout << "ScavTrap " << getName() << " : Gate keeper mode disabled" << std::endl;
		_guardMode = false;
	}
}