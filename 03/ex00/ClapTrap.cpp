/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shyrno <shyrno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 23:15:47 by chly-huc          #+#    #+#             */
/*   Updated: 2021/10/24 05:03:47 by shyrno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void): Name("CL4PTR4P"), Hitpoints(10), Energy_points(10), attack_damage(0)
{
	std::cout << "Default Constructor called : <Allow me to introduce myself - I am a CL4P-TP steward bot";
	std::cout << ", but my friends call me Claptrap!>" << std::endl;
}
ClapTrap::ClapTrap(std::string name): Name(name), Hitpoints(10), Energy_points(10), attack_damage(0) 
{
	std::cout << "Parametric Constructor called : <Allow me to introduce myself - I am a CL4P-TP steward bot";
	std::cout << ", but my friends call me Claptrap!>" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap & copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor called : <Wait ? am i dead ? No waaaay!>" << std::endl;
}

void ClapTrap::attack(const std::string & target)
{
	std::cout << "" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "<That looks like it hurts! (" << amount << " damage taken)>" << std::endl;
	Hitpoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	Hitpoints += amount;
	std::cout << "<Hell ya, Health over here! (" << Name << " got heal by " << amount << ")>" << std::endl;
}

void ClapTrap::print_stat(void)
{
	std::cout << "HP : " << this->Hitpoints << std::endl;
	std::cout << "ATK DMG : " << this->attack_damage << std::endl;
	std::cout << "ENERGY POINT : " << this->Energy_points << std::endl;
}

ClapTrap & ClapTrap::operator=(const ClapTrap & rhs)
{
	this->Name = rhs.Name;
	this->Hitpoints = rhs.Hitpoints;
	this->attack_damage = rhs.attack_damage;
	this->Energy_points = rhs.Energy_points;
	return *this;
}