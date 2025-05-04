/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svereten <svereten@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 17:40:19 by svereten          #+#    #+#             */
/*   Updated: 2025/05/04 13:07:10 by svereten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>

class ClapTrap {
public:
	ClapTrap(void);
	ClapTrap(const ClapTrap &clapTrap);
	ClapTrap(const std::string &name);
	ClapTrap(
		const std::string &name,
		unsigned int hp,
		unsigned int ep,
		unsigned int attack
	);
	~ClapTrap(void);

	ClapTrap				&operator=(const ClapTrap &clapTrap);

	void					attack(const std::string &target);
	void					takeDamage(unsigned int amount);
	void					beRepaired(unsigned int amount);

	const std::string		&getName() const;
	void					setName(const std::string &name);
	unsigned int			getHp() const;
	void					setHp(unsigned int hp);
	unsigned int			getMaxHp() const;
	void					setMaxHp(unsigned int maxHp);
	unsigned int			getEp() const;
	void					setEp(unsigned int ep);
	unsigned int			getAttack() const;
	void					setAttack(unsigned int attack);

private:
	std::string		_name;
	unsigned int	_hp;
	unsigned int	_maxHp;
	unsigned int	_ep;
	unsigned int	_attack;
};

#endif
