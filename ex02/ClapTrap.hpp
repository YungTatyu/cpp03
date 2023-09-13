/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tterao <tterao@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 19:25:13 by tterao            #+#    #+#             */
/*   Updated: 2023/09/07 19:15:47 by tterao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>

class ClapTrap
{
	protected:
		std::string					name;
		unsigned int				hitPoints;
		unsigned int				energyPoints;
		unsigned int				attackDamage;
		bool						hasHitPoints();
		bool						hasEnergyPoints();
		bool						isOverFlow(unsigned int amount);
		const static unsigned int	ClapTrapHitPoints = 10;
		const static unsigned int	ClapTrapEnergyPoints = 10;
		const static unsigned int	ClapTrapAttackDamage = 0;
	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap& obj);
		~ClapTrap();
		ClapTrap&	operator=(const ClapTrap& obj);
		void		attack(const std::string& target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
};

#endif