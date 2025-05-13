/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmatkows <lmatkows@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 09:00:20 by lmatkows          #+#    #+#             */
/*   Updated: 2025/05/13 09:52:58 by lmatkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _hitPoints(10), _nrjPoints(10), _attckDamage(0)
{
	_name = "Default";
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}
	
ClapTrap::ClapTrap(ClapTrap const & toCopy) : _name(toCopy._name), _hitPoints(toCopy._hitPoints), _nrjPoints(toCopy._nrjPoints), _attckDamage(toCopy._attckDamage)
{
	std::cout << "Copy constructor called" << std::endl;
}

ClapTrap & ClapTrap::operator=(const ClapTrap & other)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &other)
	{
		setName(other.getName());
		setHitPoints(other.getHitPoints());
		setNrjPoints(other.getNrjPoints());
		setAttckDamage(other.getAttckDamage());
	}
	return (*this);
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _nrjPoints(10), _attckDamage(0)
{
	std::cout << "Name constructor called" << std::endl;
}

std::string	ClapTrap::getName() const
{
	return (_name);
}

unsigned int	ClapTrap::getHitPoints() const
{
	return (_hitPoints);
}

unsigned int	ClapTrap::getNrjPoints() const
{
	return (_nrjPoints);
}

unsigned int	ClapTrap::getAttckDamage() const
{
	return (_attckDamage);
}

void	ClapTrap::setName(std::string name)
{
	_name = name;
}

void	ClapTrap::setHitPoints(unsigned int hitPoints)
{
	_hitPoints = hitPoints;
}

void	ClapTrap::setNrjPoints(unsigned int nrjPoints)
{
	_nrjPoints = nrjPoints;
}

void	ClapTrap::setAttckDamage(unsigned int attckDamage)
{
	_attckDamage = attckDamage;
}

void	ClapTrap::attack(const std::string & target)
{
	std::cout << getName();
	if (getHitPoints() > 0 && getNrjPoints() > 0)
		std::cout << " attacks ";
	else
	{
		std::cout << " wants to attack but does not have enough points or is dead" << std::endl;
		return;
	}
	if (getName() == target)
	{
		std::cout << "himself!!" << std::endl;
		std::cout << "Therefore attack can't happen" << std::endl;
		return;
	}
	else
	{
		std::cout << target << ", causing " << getAttckDamage() << " points of damage!" << std::endl;
		setNrjPoints(getNrjPoints() - 1);
	}
	return;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << getName();
	if ()
	setHitPoints(getHitPoints() - amount);
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	
}