/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shyrno <shyrno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 01:23:13 by shyrno            #+#    #+#             */
/*   Updated: 2021/10/24 22:21:55 by shyrno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
    this->type = "Dog";
    this->attribute = new Brain();
    std::cout << "Dog Default constructor called" << std::endl;
}

Dog::Dog(std::string type)
{
    this->type = type;
    this->attribute = new Brain();
    std::cout << "Dog Paramectric constructor called"<< std::endl;
}

Dog::Dog(Dog & copy) 
{  
    this->attribute = new Brain();
    *this = copy;
    std::cout << "Dog Copy constructor called" << std::endl;
}

Dog::~Dog(void) 
{
    delete attribute;
    std::cout << "Dog Destructor called" << std::endl;    
}

Dog & Dog::operator=(const Dog & rhs) 
{
    this->type = rhs.type;
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
