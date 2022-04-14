/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shyrno <shyrno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 01:10:02 by shyrno            #+#    #+#             */
/*   Updated: 2021/10/24 22:21:23 by shyrno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
    this->type = "Cat";
    this->attribute = new Brain();
    std::cout << "Cat Default constructor called" << std::endl;
}

Cat::Cat(std::string type)
{
    this->type = type;
    this->attribute = new Brain();
    std::cout << "Cat Paramectric constructor called"<< std::endl;
}

Cat::Cat(Cat & copy) 
{
    this->attribute = new Brain();
    *this = copy;
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