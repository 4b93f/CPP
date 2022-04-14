/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shyrno <shyrno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 05:52:28 by shyrno            #+#    #+#             */
/*   Updated: 2022/04/01 18:53:25 by shyrno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void): type("Default")
{
    std::cout << "Default Weapon CREATED" << std::endl; 
}

Weapon::Weapon(std::string type)
{
    std::cout << "Weapon CREATED" << std::endl;
    this->setType(type);
}

Weapon::~Weapon(void) 
{
    std::cout << "Weapon DESTROYED" << std::endl;
}

const std::string& Weapon::getType(void) 
{
    return(this->type);
}

void Weapon::setType(std::string type) 
{
    this->type = type;
}
