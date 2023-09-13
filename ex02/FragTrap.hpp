/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tterao <tterao@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 14:16:50 by tterao            #+#    #+#             */
/*   Updated: 2023/09/07 19:22:01 by tterao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLAPTRAP_H
#define FLAPTRAP_H

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	protected:
		const static unsigned int	FragTrapHitPoints = 100;
		const static unsigned int	FragTrapEnergyPoints = 100;
		const static unsigned int	FragTrapAttackDamage = 30;
	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap& obj);
		~FragTrap();
		FragTrap&	operator=(const FragTrap& obj);
		void		highFivesGuys();
};

#endif
