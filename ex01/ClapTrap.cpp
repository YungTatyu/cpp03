/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tterao <tterao@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 19:34:08 by tterao            #+#    #+#             */
/*   Updated: 2023/09/11 17:25:43 by tterao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name(""), hitPoints(ClapTrapHitPoints), energyPoints(ClapTrapEnergyPoints), attackDamage(ClapTrapAttackDamage)
{
	std::cout << "ClapTrap default constructor called\n";
}

ClapTrap::ClapTrap(std::string name) : name(name), hitPoints(ClapTrapHitPoints), energyPoints(ClapTrapEnergyPoints), attackDamage(ClapTrapAttackDamage)
{
	std::cout << "ClapTrap constructor called\n";
}

ClapTrap::ClapTrap(const ClapTrap& obj)
{
	std::cout << "ClapTrap copy constructor called\n";
	name = obj.name;
	hitPoints = obj.hitPoints;
	energyPoints = obj.energyPoints;
	attackDamage = obj.attackDamage;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called\n";
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& obj)
{
	if (this != &obj)
	{
		name = obj.name;
		hitPoints = obj.hitPoints;
		energyPoints = obj.energyPoints;
		attackDamage = obj.attackDamage;
	}
	return (*this);
}

bool	ClapTrap::hasHitPoints()
{
	return (hitPoints > 0);
}

bool	ClapTrap::hasEnergyPoints()
{
	return (energyPoints > 0);
}

void	ClapTrap::attack(const std::string& target)
{
	if (hasEnergyPoints() == false || hasHitPoints() == false)
	{
		std::cout << name << " can't attack\n";
		return ;
	}
	energyPoints--;
	std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!\n";
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (hitPoints < amount)
		hitPoints = 0;
	else
		hitPoints -= amount;
	std::cout << "ClapTrap " << name << " took " << amount << " points of "<<  "damage!\n";
}

bool	ClapTrap::isOverFlow(unsigned int amount)
{
	return (amount > std::numeric_limits<unsigned int>::max() - hitPoints);
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (hasEnergyPoints() == false || hasHitPoints() == false)
	{
		std::cout << name << " can't repair themselves\n";
		return ;
	}
	energyPoints--;
	if (isOverFlow(amount))
	{
		hitPoints = std::numeric_limits<unsigned int>::max();
		std::cout << "ClapTrap " << name << " repairs themselves. The hit points is " << hitPoints << "!\n";
	}
	else
	{
		hitPoints += amount;
		std::cout << "ClapTrap " << name << " repairs themselves, causing " << amount << " points of gains!\n";
	}
}
