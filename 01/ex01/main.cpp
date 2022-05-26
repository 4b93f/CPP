/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shyrno <shyrno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 04:55:57 by shyrno            #+#    #+#             */
/*   Updated: 2021/10/14 05:17:02 by shyrno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *test;

    test = zombieHorde(20, "Florian");
    for (int i = 0; i < 20; i++)
        test[i].announce();
    delete[] test;
    return (0);
}