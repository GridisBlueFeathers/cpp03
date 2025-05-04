/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svereten <svereten@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 17:58:08 by svereten          #+#    #+#             */
/*   Updated: 2025/05/04 13:24:21 by svereten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(): ClapTrap("John", 100, 50, 20) {
	std::cout << "ScavTrap " << getName() << " ready!\n";
}

ScavTrap::ScavTrap(const std::string &name): ClapTrap(name, 100, 50, 20) {
	std::cout << "ScavTrap " << getName() << " ready!\n";
}

ScavTrap::ScavTrap(const ScavTrap &scavTrap): ClapTrap(scavTrap) {
	std::cout << "ScavTrap " << getName() << " ready!\n";
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << getName() << " shutting down :(\n";
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &scavTrap) {
	if (this != &scavTrap) {
		setName(scavTrap.getName());
		setHp(scavTrap.getHp());
		setMaxHp(scavTrap.getMaxHp());
		setEp(scavTrap.getEp());
		setAttack(scavTrap.getAttack());
	}
	return (*this);
}

void	ScavTrap::attack(const std::string &target) {
	if (!getHp()) {
		std::cout << "ScavTrap " << getName()
			<< " is dead and can't attack\n";
		return ;
	}
	if (!getEp()) {
		std::cout << "ScavTrap " << getName()
			<< " doesn't have enough energy for the attack\n";
		return ;
	}
	std::cout << "ScavTrap " << getName()
		<< " attacks " << target
		<< ", causing " << getAttack()
		<< " points of damage!\n";
	setEp(getEp() - 1);
}

void	ScavTrap::guardGate() {
	std::cout << "ScavTrap " << getName()
		<< ": \"You shall not pass!\"\n";
}
