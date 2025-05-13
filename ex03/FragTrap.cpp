/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmatkows <lmatkows@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 13:21:24 by lmatkows          #+#    #+#             */
/*   Updated: 2025/05/13 14:32:08 by lmatkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << std::endl;
	std::cout << "FragTrap default constructor called" << std::endl;
	setHitPoints(100);
	setNrjPoints(100);
	setAttckDamage(30);	
}

FragTrap::~FragTrap()
{
	std::cout << std::endl;
	std::cout << "FragTrap destructor called" << std::endl;
}
FragTrap::FragTrap(const FragTrap & toCopy) : ClapTrap(toCopy)
{
	std::cout << std::endl;
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = toCopy;
}
		
FragTrap & FragTrap::operator=(const FragTrap & other)
{
	std::cout << std::endl;
	std::cout << "FragTrap assignation operator called" << std::endl;
	if (this != &other)
	{
		setName(other.getName());
		setHitPoints(other.getHitPoints());
		setNrjPoints(other.getNrjPoints());
		setAttckDamage(other.getAttckDamage());
	}
	return (*this);
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << std::endl;
	std::cout << "FragTrap name constructor called" << std::endl;
	setHitPoints(100);
	setNrjPoints(50);
	setAttckDamage(20);	
}

void	FragTrap::highFivesGuys()
{
	std::cout << std::endl;
	std::cout << "FragTrap " << getName() << " : do you want to High Five with me tonight?" << std::endl;
}
