/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shyrno <shyrno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 02:03:25 by shyrno            #+#    #+#             */
/*   Updated: 2021/11/08 23:58:34 by shyrno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
    this->type = "WrongAnimal";
    std::cout << "WrongAnimal Default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal & copy) 
{  
    *this = copy;
    std::cout << "WrongAnimal Copy constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal(void) 
{
    std::cout << "WrongAnimal Destructor called" << std::endl;    
}

WrongAnimal & WrongAnimal::operator=(const WrongAnimal & rhs) 
{
    this->type = rhs.type;
    return *this;
}

void WrongAnimal::makeSound(void) const
{
    std::cout << type << " sound : Boooo " << std::endl;     
}

std::string WrongAnimal::getType(void) const
{
    return(this->type);
}
