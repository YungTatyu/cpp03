/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tterao <tterao@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 18:32:29 by tterao            #+#    #+#             */
/*   Updated: 2023/09/07 18:29:38 by tterao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	ClapTrap	taka("taka");
	ClapTrap	haya("haya");
	ClapTrap	t("t");

	taka.attack("haya");
	haya.takeDamage(UINT_MAX);
	haya.takeDamage(3);
	haya.beRepaired(3);
	taka.beRepaired(UINT_MAX);
	taka.takeDamage(UINT_MAX);
	taka.beRepaired(UINT_MAX);
	std::cout << std::numeric_limits<unsigned int>::max() << "\n";
	for (size_t i = 0; i < 12; i++)
	{
		t.attack("someone");
	}
	return (0);
}
