/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tterao <tterao@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 18:04:21 by tterao            #+#    #+#             */
/*   Updated: 2023/09/11 17:27:50 by tterao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap
{
	protected:
		const static unsigned int	ScavTrapHitPoints = 100;
		const static unsigned int	ScavTrapEnergyPoints = 50;
		const static unsigned int	ScavTrapAttackDamage = 20;
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap& obj);
		~ScavTrap();
		ScavTrap&	operator=(const ScavTrap& obj);
		void	attack(const std::string& target);
		void	guardGate();
};

#endif