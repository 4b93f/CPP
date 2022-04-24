/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shyrno <shyrno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 22:39:16 by shyrno            #+#    #+#             */
/*   Updated: 2022/04/23 02:47:04 by shyrno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void): ClapTrap()
{
    this->Hitpoints = 100;
    this->Energy_points = 50;
    this->Name = "ScavTrap";
    this->attack_damage = 20;
	std::cout << "Default Constructor called : <Allow me to introduce myself - I am a Sc4tr4p aka a better CL4PTR4P";
	std::cout << ", but my friends call me ScavTrap!>" << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap()
{
    this->Hitpoints = 100;
    this->Energy_points = 50;
    this->Name = name;
    this->attack_damage = 20;
	std::cout << "Parametric Constructor called : <Allow me to introduce myself - I am a Sc4tr4p aka a better CL4PTR4P";
	std::cout << ", but my friends call me ScavTrap!>" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap & copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

ScavTrap::~ScavTrap(void)
{
	std::cout <<"ScavTrap Destructor called : <Goodnight girl, I'll see ya tomorrow :)>" << std::endl;
}

void ScavTrap::guardGate(void)
{
    std::cout <<"Gate Keepper mode activated !" << std::endl;
}

void ScavTrap::attack(const std::string & target)
{
	if (Energy_points == 0)
		std::cout << "No energy left, try again :)" << std::endl;
	else
	{
		std::cout << "<Emotional daaaamage !!! (" << this->Name << " attack "<< target << ", dealing " << this->attack_damage  << " damage)>" <<std::endl;
		Energy_points--;
	}
}

ScavTrap & ScavTrap::operator=(const ScavTrap & rhs)
{
	this->Name = rhs.Name;
	this->Hitpoints = rhs.Hitpoints;
	this->attack_damage = rhs.attack_damage;
	this->Energy_points = rhs.Energy_points;
	return *this;
}