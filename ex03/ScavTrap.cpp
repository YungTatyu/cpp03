/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tterao <tterao@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 15:49:44 by tterao            #+#    #+#             */
/*   Updated: 2023/09/11 17:29:56 by tterao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "ScavTrap default constructor called\n";
	hitPoints = ScavTrapHitPoints;
	energyPoints = ScavTrapEnergyPoints;
	attackDamage = ScavTrapAttackDamage;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap constructor called\n";
	this->name = name;
	hitPoints = ScavTrapHitPoints;
	energyPoints = ScavTrapEnergyPoints;
	attackDamage = ScavTrapAttackDamage;
}

ScavTrap::ScavTrap(const ScavTrap& obj) : ClapTrap(obj)
{
	std::cout << "ScavTrap copy constructor called\n";
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& obj)
{
	ClapTrap::operator=(obj);
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called\n";
}

void	ScavTrap::attack(const std::string& target)
{
	if (hasEnergyPoints() == false || hasHitPoints() == false)
	{
		std::cout << "ScavTrap " << name << " can't attack\n";
		return ;
	}
	energyPoints--;
	std::cout << "ScavTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!\n";

}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << name << " is now in Gate keeper mode!\n";
}
