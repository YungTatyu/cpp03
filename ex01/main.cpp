/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tterao <tterao@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 18:32:29 by tterao            #+#    #+#             */
/*   Updated: 2023/07/29 17:54:42 by tterao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{
	ScavTrap	taka("take");
	ScavTrap	taka2;

	taka.attack("test");
	taka.guardGate();
	taka.beRepaired(50);
	ScavTrap	haya(taka);
	haya.takeDamage(10);
	taka.attack("j");
	haya.attack("haya");
	for (size_t i = 0; i < 50; i++)
	{
		taka.attack("test");
	}
	taka2 = taka;
	taka2.attack("test");
	taka2.guardGate();

	return (0);
}
