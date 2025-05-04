/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svereten <svereten@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 15:54:03 by svereten          #+#    #+#             */
/*   Updated: 2025/05/04 16:21:57 by svereten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef	DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap {
public:
	DiamondTrap();
	~DiamondTrap();
	DiamondTrap(const DiamondTrap &diamondTrap);
	DiamondTrap(
		const std::string &name,
		const std::string &name_clap_name
	);

	DiamondTrap	&operator=(const DiamondTrap &diamondTrap);
	
	void		whoAmI();

private:
	std::string	_name;
};

#endif
