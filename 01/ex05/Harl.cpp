/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shyrno <shyrno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 01:22:00 by shyrno            #+#    #+#             */
/*   Updated: 2022/04/13 06:00:12 by shyrno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
    //std::cout << "Harl constructor called" << std::endl;
}

Harl::~Harl(void)
{
    //std::cout << "Harl destructor called" << std::endl;
}

void Harl::complain(std::string level)
{
    Harl point;
    void (Harl::*fct[]) (void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string tab[4] = {"debug", "info", "warning", "error"}; 
    
    for(int i = 0; i < 4; i++)
        if (!tab[i].compare(level))
            (point.*fct[i])();
}

void Harl::debug(void)
{
    std::cout << "\"I love to get extra bacon";
    std::cout << " for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!\"" << std::endl;
}

void Harl::info(void)
{
    std::cout << "\"I cannot believe adding extra";
    std::cout << " bacon cost more money. You don’t put enough! If you did I would not have to ask for it!\"" << std::endl;
}
void Harl::warning(void)
{
    std::cout << "\"I think I deserve to have some extra bacon for free. I’ve been";
    std::cout << " coming here for years and you just started working here last month.\"" << std::endl;
}

void Harl::error(void)
{
    std::cout << "\"This is unacceptable, I want to speak to the manager now.\"" << std::endl;
}
