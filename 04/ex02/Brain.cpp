/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shyrno <shyrno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 02:38:15 by shyrno            #+#    #+#             */
/*   Updated: 2021/10/24 22:07:31 by shyrno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
    std::cout << "Brain Default constructor called" << std::endl;
}

Brain::Brain(Brain & copy) 
{  
    *this = copy;
    std::cout << "Brain Copy constructor called" << std::endl;
}

Brain::~Brain(void) 
{
    std::cout << "Brain Destructor called" << std::endl;    
}

Brain & Brain::operator=(const Brain & rhs) 
{
    return *this;
}
