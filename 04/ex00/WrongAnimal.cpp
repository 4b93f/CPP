/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chly-huc <chly-huc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 02:03:25 by shyrno            #+#    #+#             */
/*   Updated: 2022/05/24 19:04:49 by chly-huc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
    this->type = "WrongAnimal";
    std::cout << "WrongAnimal Default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const & copy) 
{  
    *this = copy;
    std::cout << "WrongAnimal Copy constructor called" << std::endl;
}

WrongAnimal & WrongAnimal::operator=(const WrongAnimal & rhs) 
{
    (void)rhs;
    return *this;
}

WrongAnimal::~WrongAnimal(void) 
{
    std::cout << "WrongAnimal Destructor called" << std::endl;    
}


void WrongAnimal::makeSound(void) const
{
    std::cout << type << " sound : Boooo " << std::endl;     
}

std::string WrongAnimal::getType(void) const
{
    return(this->type);
}
