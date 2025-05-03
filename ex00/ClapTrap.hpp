/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svereten <svereten@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 17:40:19 by svereten          #+#    #+#             */
/*   Updated: 2025/05/03 17:37:59 by svereten         ###   ########.fr       */
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
	~ClapTrap(void);

	ClapTrap	&operator=(const ClapTrap &clapTrap);

	void		attack(const std::string &target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);

private:
	std::string		_name;
	unsigned int	_hp;
	unsigned int	_max_hp;
	unsigned int	_ep;
	unsigned int	_attack;
};

#endif
