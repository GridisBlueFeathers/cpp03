/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svereten <svereten@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 17:46:20 by svereten          #+#    #+#             */
/*   Updated: 2025/05/02 18:36:51 by svereten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(void): _name("John") {
	std::cout << "ClapTrap " << _name << " ready!\n";
};

ClapTrap::ClapTrap(const ClapTrap &clapTrap): _name(clapTrap._name) {
	std::cout << "ClapTrap " << _name << " ready!\n";
};

ClapTrap::ClapTrap(const std::string &name): _name(name) {
	std::cout << "ClapTrap " << _name << " ready!\n";
}

ClapTrap::~ClapTrap(void) {
	std::cout << "ClapTrap " << _name << " shutting down :(\n";
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &clapTrap) {
	if (this != &clapTrap)
		*this = clapTrap;
	return (*this);
}

void	ClapTrap::attack(const std::string &target) {
	std::cout << "ClapTrap " << _name
		<< " attacks " << target
		<< ", causing " << _attack
		<< " points of damage!";
}
