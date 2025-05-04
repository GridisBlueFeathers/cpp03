/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svereten <svereten@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 17:39:36 by svereten          #+#    #+#             */
/*   Updated: 2025/05/04 16:04:53 by svereten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap {
public:
	ScavTrap();
	ScavTrap(const ScavTrap &scavTrap);
	ScavTrap(const std::string &name);
	~ScavTrap();

	ScavTrap	&operator=(const ScavTrap &scavTrap);
	void		attack(const std::string &target);
	void		guardGate();

private:
};

#endif
