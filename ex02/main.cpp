/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmatkows <lmatkows@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 09:22:57 by lmatkows          #+#    #+#             */
/*   Updated: 2025/05/13 13:34:51 by lmatkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	std::string	Play1 = "Player 1";
	std::string	Play2 = "Player 2";
	std::string	Play3 = "Player 3";
	
	FragTrap	Player1(Play1);
	FragTrap	Player2(Player1);
	FragTrap	Player3(Play3);
	FragTrap	Player4;
	
	//Player4 = Player3;
	Player2.setName("Evil");

	Player1.announce();
	Player2.announce();
	Player3.announce();
	Player4.announce();
	Player1.attack(Play2);
	Player1.announce();
	Player1.beRepaired(12);
	Player1.announce();
	Player1.takeDamage(2);
	Player1.announce();
	Player1.takeDamage(43);
	Player1.announce();
	Player3.highFivesGuys();
	Player1.highFivesGuys();
}