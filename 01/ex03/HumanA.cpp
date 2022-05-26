/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shyrno <shyrno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 18:47:14 by shyrno            #+#    #+#             */
/*   Updated: 2021/10/24 04:17:21 by shyrno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &WEAPON_TYPE): WEAPON_TYPE(WEAPON_TYPE)
{
    if (!name.empty())
        this->name = name;
    else
        this->name = "Blank";
    std::cout << name << " is born" << std::endl;
}

HumanA::~HumanA(void) 
{
    std::cout << name << " is dead dedo" << std::endl;
}

void HumanA::attack(void)
{
    std::cout << this->name << " attack with his " << this->WEAPON_TYPE.getType() << std::endl; 
}
