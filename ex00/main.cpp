/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svereten <svereten@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 15:47:50 by svereten          #+#    #+#             */
/*   Updated: 2025/05/03 17:36:14 by svereten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ClapTrap.hpp"

int	main(void) {
	ClapTrap trap;
	ClapTrap johnny = ClapTrap("Johnny");
	ClapTrap john(johnny);

	john = trap;

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

	john.attack("13");
	john.beRepaired(10);
	john.takeDamage(10);

}
