/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chly-huc <chly-huc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 01:23:13 by shyrno            #+#    #+#             */
/*   Updated: 2022/05/24 19:12:46 by chly-huc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
    this->type = "Dog";
    this->attribute = new Brain();
    std::cout << "Dog Default constructor called" << std::endl;
}

Dog::Dog(Dog & copy): Animal()
{
    this->attribute = new Brain(*copy.attribute);
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
    this->attribute = new Brain(*rhs.attribute);
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

