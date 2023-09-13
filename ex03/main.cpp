/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tterao <tterao@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 18:32:29 by tterao            #+#    #+#             */
/*   Updated: 2023/09/07 20:21:23 by tterao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main()
{
	DiamondTrap	taka("take");
	DiamondTrap	taka2;

	taka.attack("test");
	taka.whoAmI();
	taka2.whoAmI();
	taka.highFivesGuys();
	DiamondTrap	haya(taka);
	haya.takeDamage(10);
	taka.attack("j");
	haya.attack("haya");
	DiamondTrap	ta(haya);
	ta.takeDamage(90);
	ta.attack("op");
	for (size_t i = 0; i < 50; i++)
	{
		taka.attack("test");
	}
	taka2 = taka;
	taka2.attack("test");
	taka2.whoAmI();

	return (0);
}
