/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svereten <svereten@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 13:36:35 by svereten          #+#    #+#             */
/*   Updated: 2025/05/04 14:29:28 by svereten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(): ClapTrap("John", 100, 100, 30) {
	std::cout << "FragTrap " << getName() << " is ready!\n";
}

FragTrap::FragTrap(const FragTrap &fragTrap):
	ClapTrap(
		fragTrap.getName(),
		fragTrap.getHp(),
		fragTrap.getEp(),
		fragTrap.getAttack()
	)
{
	std::cout << "FragTrap " << getName() << " is ready!\n";
}

FragTrap::FragTrap(const std::string &name): ClapTrap(name, 100, 100, 30) {
	std::cout << "FragTrap " << getName() << " is ready!\n";
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap " << getName() << " shutting down :(\n";
}

FragTrap	&FragTrap::operator=(const FragTrap &fragTrap) {
	if (this != &fragTrap) {
		setName(fragTrap.getName());
		setHp(fragTrap.getHp());
		setMaxHp(fragTrap.getMaxHp());
		setEp(fragTrap.getEp());
		setAttack(fragTrap.getAttack());
	}
	return (*this);
}

void	FragTrap::highFiveGuys() {
	std::cout << "FragTrap " << getName()
		<< ": good job guys! *high fives everyone*\n";
}
