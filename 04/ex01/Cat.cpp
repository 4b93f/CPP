/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shyrno <shyrno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 01:10:02 by shyrno            #+#    #+#             */
/*   Updated: 2021/11/08 23:58:34 by shyrno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
    this->type = "Cat";
    this->attribute = new Brain();
    std::cout << "Cat Default constructor called" << std::endl;
}

Cat::Cat(const Cat & copy): Animal()
{  
    this->type = "Cat";
    this->attribute = new Brain(*copy.attribute);
    std::cout << "Cat Copy constructor called" << std::endl;
}

Cat::~Cat(void) 
{
    delete attribute;
    std::cout << "Cat Destructor called" << std::endl;    
}

Cat & Cat::operator=(const Cat & rhs) 
{
    this->type = rhs.type;
    this->attribute = new Brain(*rhs.attribute);
    return *this;
}

void Cat::makeSound(void) const
{
    std::cout << type << " sound : Meeeeeeooooow" << std::endl;     
}

std::string Cat::getType(void) const
{
    return(this->type);
}
