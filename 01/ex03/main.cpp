/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shyrno <shyrno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 05:38:24 by shyrno            #+#    #+#             */
/*   Updated: 2022/04/01 18:55:26 by shyrno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
    {
        Weapon rod;
        HumanA bob("Florian", rod);
        bob.attack();
        rod.setType("Fork");
        bob.attack();
    }
    std::cout << "----------------" << std::endl;
    {
        Weapon sword = Weapon("Laser gun");
        HumanB Flo("Didier");
        Flo.setWeapon(sword);
        Flo.attack();
        sword.setType("Dubstep Gun");
        Flo.attack();
    }
    std::cout << "----------------" << std::endl;
    return(0); 
}