/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svereten <svereten@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 16:05:36 by svereten          #+#    #+#             */
/*   Updated: 2025/05/04 16:21:36 by svereten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap(): ClapTrap("John", 100, 50, 30), _name("John") {
	std::cout << "DiamondTrap " << _name << " is ready!\n";
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap " << _name << " shutting down :(\n"; 
}

DiamondTrap::DiamondTrap(const DiamondTrap &diamondTrap):
	ClapTrap(
		diamondTrap.getName(),
		diamondTrap.getHp(),
		diamondTrap.getEp(),
		diamondTrap.getAttack()
	),
	_name(diamondTrap.getName())
{
	std::cout << "DiamondTrap " << _name << " is ready!\n";
}

DiamondTrap::DiamondTrap(
	const std::string &name,
	const std::string &name_clap_name
):
	ClapTrap(name_clap_name, 100, 50, 30),
	_name(name)
{
	std::cout << "DiamondTrap " << _name << " is ready!\n";
}


DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &diamondTrap) {
	if (this != &diamondTrap) {
		setName(diamondTrap.getName());
		setHp(diamondTrap.getHp());
		setMaxHp(diamondTrap.getMaxHp());
		setEp(diamondTrap.getEp());
		setAttack(diamondTrap.getAttack());
		_name = diamondTrap._name;
	}
	return (*this);
}

void	DiamondTrap::whoAmI() {
	std::cout << "DiamondTrap " << _name
		<< ": My name is " << _name
		<< " and my ClapTrap's name is" << getName()
		<< std::endl;
}
