/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tterao <tterao@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 15:29:57 by tterao            #+#    #+#             */
/*   Updated: 2023/09/07 20:19:19 by tterao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), FragTrap(), ScavTrap()
{
	std::cout << "DiamondTrap default constructor called\n";
	this->name = ClapTrap::name;
	ClapTrap::name = name + "_clap_name";
	this->hitPoints = FragTrapHitPoints;
	this->energyPoints = ScavTrapEnergyPoints;
	this->attackDamage = FragTrapAttackDamage;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), FragTrap(name), ScavTrap(name)
{
	std::cout << "DiamondTrap constructor called\n";
	this->name = ClapTrap::name;
	ClapTrap::name = name + "_clap_name";
	this->hitPoints = FragTrapHitPoints;
	this->energyPoints = ScavTrapEnergyPoints;
	this->attackDamage = FragTrapAttackDamage;
}

DiamondTrap::DiamondTrap(const DiamondTrap& obj)
{
	std::cout << "DiamondTrap copy constructor called\n";
	this->name = obj.name;
	this->ClapTrap::name = obj.ClapTrap::name;
	this->hitPoints = obj.hitPoints;
	this->energyPoints = obj.energyPoints;
	this->attackDamage = obj.attackDamage;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called\n";
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& obj)
{
	if (this != &obj)
	{
		this->name = obj.name;
		this->ClapTrap::name = obj.ClapTrap::name;
		this->hitPoints = obj.hitPoints;
		this->energyPoints = obj.energyPoints;
		this->attackDamage = obj.attackDamage;
	}
	return (*this);
}

void	DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap name: " << this->name << ", ClapTrap name: " << ClapTrap::name << '\n';
}
