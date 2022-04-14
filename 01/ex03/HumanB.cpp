/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shyrno <shyrno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 19:37:04 by shyrno            #+#    #+#             */
/*   Updated: 2021/10/24 04:18:05 by shyrno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name_): name(name_) 
{
    std::cout << name << " is born" << std::endl;
}

HumanB::~HumanB(void) 
{
    std::cout << name << " is dead dedo" << std::endl;
}

void HumanB::attack(void)
{
    std::cout << this->name << " attack with his " << this->WEAPON_TYPE->getType() << std::endl; 
}

void HumanB::setWeapon(Weapon &type)
{
    this->WEAPON_TYPE = &type;
}
