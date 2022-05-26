/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shyrno <shyrno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 04:10:46 by shyrno            #+#    #+#             */
/*   Updated: 2021/10/24 03:50:45 by shyrno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <string>
#include <iostream>

class Zombie
{
    public:
        Zombie(void);
        Zombie(std::string name);
        ~Zombie(void);
        void announce(void);
    private:
        std::string name;
};

void randomChump(std::string name);
Zombie *NewZombie(std::string name);

#endif