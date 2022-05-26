/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shyrno <shyrno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 01:00:51 by shyrno            #+#    #+#             */
/*   Updated: 2021/11/08 23:58:34 by shyrno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
    this->type = "animal";
    std::cout << "Animal Default constructor called" << std::endl;
}

Animal::Animal(Animal & copy) 
{  
    *this = copy;
    std::cout << "Animal Copy constructor called" << std::endl;
}

Animal::~Animal(void) 
{
    std::cout << "Animal Destructor called" << std::endl;    
}

Animal & Animal::operator=(const Animal & rhs) 
{
    (void)rhs;
    return *this;
}

std::string Animal::getType(void) const
{
    return(this->type);
}

void Animal::makeSound(void) const
{
    std::cout << type << " sound : " << std::endl;     
}