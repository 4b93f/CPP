/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shyrno <shyrno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 01:23:13 by shyrno            #+#    #+#             */
/*   Updated: 2021/11/08 23:58:34 by shyrno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void): Animal()
{
    this->type = "Dog";
    std::cout << "Dog Default constructor called" << std::endl;
}

Dog::Dog(Dog & copy): Animal()
{
    *this = copy;
    std::cout << "Dog Copy constructor called" << std::endl;
}

Dog::~Dog(void) 
{
    std::cout << "Dog Destructor called" << std::endl;    
}

Dog & Dog::operator=(const Dog & rhs) 
{
    (void)rhs;
    return *this;
}

void Dog::makeSound(void) const
{
    std::cout << type << " sound : Oooouuuuaaaaaf" << std::endl;     
}

std::string Dog::getType(void) const
{
	return (type);
}