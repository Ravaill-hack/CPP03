/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmatkows <lmatkows@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 13:53:39 by lmatkows          #+#    #+#             */
/*   Updated: 2025/05/13 14:53:41 by lmatkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap()
{
	std::cout << std::endl;
	std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << std::endl;
	std::cout << "DiamondTrap destructor called" << std::endl;
}
DiamondTrap::DiamondTrap(const DiamondTrap & toCopy) : ClapTrap(toCopy), ScavTrap(toCopy), FragTrap(toCopy)
{
	std::cout << std::endl;
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	_name = toCopy._name;
	_hitPoints = toCopy._hitPoints;
	_nrjPoints = toCopy._nrjPoints;
	_attckDamage = toCopy._attckDamage;
}
		
DiamondTrap & DiamondTrap::operator=(const DiamondTrap & other)
{
	std::cout << std::endl;
	std::cout << "DiamondTrap assignation operator called" << std::endl;
	if (this != &other)
	{
		_name = other._name;
		_hitPoints = other._hitPoints;
		_nrjPoints = other._nrjPoints;
		_attckDamage = other._attckDamage;
	}
	return (*this);
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(), FragTrap(), _name(name)
{
	std::cout << std::endl;
	std::cout << "DiamondTrap name constructor called" << std::endl;
	_hitPoints = FragTrap::_hitPoints;
	_nrjPoints = ScavTrap::_nrjPoints;
	_attckDamage = FragTrap::_attckDamage;
}

void	DiamondTrap::whoAmI()
{
	std::cout << std::endl;
	std::cout << "Name " << _name << std::endl;
	std::cout << "ClapTrap name " << ClapTrap::_name << std::endl;
}