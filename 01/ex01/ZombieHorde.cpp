/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shyrno <shyrno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 04:59:24 by shyrno            #+#    #+#             */
/*   Updated: 2022/04/13 05:17:40 by shyrno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name) 
{
    Zombie *zombar = new Zombie[N];
    
    while(N--)
        zombar[N].setname(name);
    return (zombar);
}