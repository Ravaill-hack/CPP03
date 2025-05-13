/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmatkows <lmatkows@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 09:22:57 by lmatkows          #+#    #+#             */
/*   Updated: 2025/05/13 09:28:37 by lmatkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	std::string	Play1 = "Player1";
	std::string	Play2 = "Player2";
	std::string	Play3 = "Player3";
	
	ClapTrap	Player1(Play1);
	ClapTrap	Player2(Play2);
	ClapTrap	Player3(Play3);

	Player1.attack(Play2);
}