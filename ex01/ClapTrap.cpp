/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svereten <svereten@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 17:46:20 by svereten          #+#    #+#             */
/*   Updated: 2025/05/04 13:11:17 by svereten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(void):
	_name("John"),
	_hp(10),
	_maxHp(_hp),
	_ep(10),
	_attack(0)
{
	std::cout << "ClapTrap " << _name << " ready!\n";
};

ClapTrap::ClapTrap(const ClapTrap &clapTrap):
	_name(clapTrap._name),
	_hp(10),
	_maxHp(_hp),
	_ep(10),
	_attack(0)
{
	std::cout << "ClapTrap " << _name << " ready!\n";
};

ClapTrap::ClapTrap(const std::string &name):
	_name(name),
	_hp(10),
	_maxHp(_hp),
	_ep(10),
	_attack(0)
{
	std::cout << "ClapTrap " << _name << " ready!\n";
}

ClapTrap::ClapTrap(
	const std::string &name,
	unsigned int hp,
	unsigned int ep,
	unsigned int attack
) :
	_name(name),
	_hp(hp),
	_maxHp(_hp),
	_ep(ep),
	_attack(attack)
{
	std::cout << "ClapTrap " << _name << " ready!\n";
}


ClapTrap::~ClapTrap(void) {
	std::cout << "ClapTrap " << _name << " shutting down :(\n";
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &clapTrap) {
	if (this != &clapTrap) {
		_name = clapTrap._name;
		_hp = clapTrap._hp;
		_maxHp = clapTrap._maxHp;
		_ep = clapTrap._ep;
		_attack = clapTrap._attack;
	}

	return (*this);
}

void	ClapTrap::attack(const std::string &target) {
	if (!_hp) {
		std::cout << "ClapTrap " << _name
			<< " is dead and can't attack\n";
		return ;
	}
	if (!_ep) {
		std::cout << "ClapTrap " << _name
			<< " doesn't have enough energy for the attack\n";
		return ;
	}
	std::cout << "ClapTrap " << _name
		<< " attacks " << target
		<< ", causing " << _attack
		<< " points of damage!\n";
	_ep--;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (!_hp) {
		std::cout << "ClapTrap " << _name
			<< " is dead and can't repair\n";
		return ;
	}
	if (!_ep) {
		std::cout << "ClapTrap " << _name
			<< " doesn't have enough energy for the repair\n";
		return ;
	}
	_hp += amount;
	if (_hp > _maxHp)
		_hp = _maxHp;
	_ep--;
	std::cout << "ClapTrap " << _name
		<< " has repaired " << amount
		<< " points of health! It has " << _hp
		<< " health points now\n";
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (!_hp) {
		std::cout << "ClapTrap " << _name
			<< "'s friend: Stop! Stop! He's Already Dead!\n";
		return ;
	}
	if (amount >= _hp) {
		std::cout << "ClapTrap " << _name
			<< " took " << amount
			<< " of damage and died :(\n";
		_hp = 0;
		return ;
	}
	_hp -= amount;
	std::cout << "ClapTrap " << _name
		<< " took " << amount
		<< " of damage and has " << _hp
		<< " health points now\n";
}

const std::string	&ClapTrap::getName() const {
	return (_name);
}

void	ClapTrap::setName(const std::string &name) {
	_name = name;
}

unsigned int	ClapTrap::getHp() const {
	return (_hp);
}

void	ClapTrap::setHp(unsigned int hp) {
	_hp = hp;
}

unsigned int	ClapTrap::getMaxHp() const {
	return (_maxHp);
}

void	ClapTrap::setMaxHp(unsigned int maxHp) {
	_maxHp = maxHp;
}

unsigned int	ClapTrap::getEp() const {
	return (_ep);
}

void	ClapTrap::setEp(unsigned int ep) {
	_ep = ep;
}

unsigned int	ClapTrap::getAttack() const {
	return (_attack);
}

void	ClapTrap::setAttack(unsigned int attack) {
	_attack = attack;
}
