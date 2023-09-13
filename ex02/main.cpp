/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tterao <tterao@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 18:32:29 by tterao            #+#    #+#             */
/*   Updated: 2023/08/01 14:56:52 by tterao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main()
{
	FragTrap	taka("take");
	FragTrap	taka2;

	taka.attack("test");
	taka.highFivesGuys();
	FragTrap	haya(taka);
	haya.takeDamage(10);
	taka.attack("j");
	haya.attack("haya");
	FragTrap	ta(haya);
	ta.takeDamage(90);
	ta.attack("op");
	for (size_t i = 0; i < 100; i++)
	{
		taka.attack("test");
	}
	taka2 = taka;
	taka2.attack("test");
	taka2.highFivesGuys();

	return (0);
}
