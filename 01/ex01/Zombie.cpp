/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shyrno <shyrno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 05:00:31 by shyrno            #+#    #+#             */
/*   Updated: 2021/10/24 03:55:58 by shyrno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{

}

Zombie::Zombie(std::string name): name(name) 
{
    
}

Zombie::~Zombie(void)
{
    std::cout << "Zombie " << this->name << " is dead" << std::endl;
}

void Zombie::announce(void) 
{
    std::cout << this->name << ":"  << " BraiiiiiiinnnzzzZ..." << std::endl;
}

void randomChump(std::string name) 
{
    Zombie zombar(name);
    zombar.announce();
}

Zombie *NewZombie(std::string name) 
{
    Zombie *Zomb = new Zombie(name);
    return (Zomb);
}

void Zombie::setname(std::string name)
{
    this->name = name;
}