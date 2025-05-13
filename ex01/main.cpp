/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmatkows <lmatkows@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 09:22:57 by lmatkows          #+#    #+#             */
/*   Updated: 2025/05/13 11:02:10 by lmatkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	std::string	Play1 = "Player1";
	std::string	Play2 = "Player2";
	std::string	Play3 = "Player3";
	
	ClapTrap	Player1(Play1);
	ClapTrap	Player2(Player1);
	ClapTrap	Player3(Play3);
	ClapTrap	Player4;
	
	//Player4 = Player3;
	Player2.setName("Player2");

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
}