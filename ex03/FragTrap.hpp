/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svereten <svereten@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 13:31:56 by svereten          #+#    #+#             */
/*   Updated: 2025/05/04 16:05:04 by svereten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap {
public:
	FragTrap();
	FragTrap(const FragTrap &fragTrap);
	FragTrap(const std::string &name);
	~FragTrap();

	FragTrap	&operator=(const FragTrap &fragTrap);

	void		highFiveGuys(void);

private:
	
};

#endif
