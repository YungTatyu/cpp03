/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tterao <tterao@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 14:23:09 by tterao            #+#    #+#             */
/*   Updated: 2023/09/07 19:22:50 by tterao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "FragTrap default constructor called\n";
	hitPoints = FragTrapHitPoints;
	energyPoints = FragTrapEnergyPoints;
	attackDamage = FragTrapAttackDamage;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap constructor called\n";
	this->name = name;
	hitPoints = FragTrapHitPoints;
	energyPoints = FragTrapEnergyPoints;
	attackDamage = FragTrapAttackDamage;
}

FragTrap::FragTrap(const FragTrap& obj) : ClapTrap(obj)
{
	std::cout << "FragTrap copy constructor called\n";
}

FragTrap&	FragTrap::operator=(const FragTrap& obj)
{
	ClapTrap::operator=(obj);
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called\n";
}

void	FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << name << " high five guys!\n";
}
