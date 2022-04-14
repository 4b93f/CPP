/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shyrno <shyrno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 04:28:49 by shyrno            #+#    #+#             */
/*   Updated: 2022/03/30 19:14:59 by shyrno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    randomChump("Charli");
	Zombie test("Florian");
    test.announce();
	Zombie *second = NewZombie("JN");
	second->announce();
    delete second;
	second = NewZombie("Hugo");
	second->announce();
    delete second;
}