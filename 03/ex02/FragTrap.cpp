/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shyrno <shyrno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 00:35:35 by shyrno            #+#    #+#             */
/*   Updated: 2021/10/24 05:07:07 by shyrno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void): ClapTrap()
{
    this->Name = "FragTrap";
    this->attack_damage = 30;
    this->Energy_points = 100;
    this->Hitpoints = 100;
    std::cout << "FragTrap Default Constructor called : <Allow me to introduce myself - I am a Fr4gTr4p aka a better CL4PTR4P";
	std::cout << ", but my friends call me FragTrap!>" << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap()
{
    this->Name = name;
    this->attack_damage = 30;
    this->Energy_points = 100;
    this->Hitpoints = 100;
    std::cout << "FragTrap Parametric Constructor called : <Allow me to introduce myself - I am a Fr4gTr4p aka a better CL4PTR4P";
	std::cout << ", but my friends call me FragTrap!>" << std::endl;
}

FragTrap::FragTrap(FragTrap & copy): ClapTrap()
{
    std::cout << "FragTrap Copy constructor called" << std::endl;
    *this = copy;
}

FragTrap::~FragTrap(void) 
{
    std::cout <<"FragTrap Destructor called : <Wait ? am i dead ? No waaaay!>" << std::endl;
}

FragTrap & FragTrap::operator=(const FragTrap & rhs) 
{
    this->Name = rhs.Name;
	this->Hitpoints = rhs.Hitpoints;
	this->attack_damage = rhs.attack_damage;
	this->Energy_points = rhs.Energy_points;
	return *this;  
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "Ma maaaaaaaaan, give me an highFive :), ok ?" << std::endl;
}
