/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svereten <svereten@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 15:47:50 by svereten          #+#    #+#             */
/*   Updated: 2025/05/04 16:21:10 by svereten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "DiamondTrap.hpp"

int	main(void) {
	DiamondTrap	trap("Diamond John", "Johnny");

	trap.attack("1");
	trap.attack("2");
	trap.attack("3");
	trap.attack("4");
	trap.attack("5");
	trap.attack("6");
	trap.attack("7");

	trap.takeDamage(5);
	trap.beRepaired(2);
	trap.beRepaired(10);

	trap.attack("8");
	trap.attack("9");
	trap.attack("10");
	trap.attack("11");
	trap.beRepaired(10);
	trap.takeDamage(10);

	trap.attack("12");
	trap.beRepaired(10);
	trap.takeDamage(10);

	trap.highFiveGuys();
	trap.highFiveGuys();

	trap.guardGate();

	trap.whoAmI();

}
