/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shyrno <shyrno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 01:10:02 by shyrno            #+#    #+#             */
/*   Updated: 2021/11/08 21:08:11 by shyrno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void): Animal()
{
    this->type = "Cat";
    std::cout << "Cat Default constructor called" << std::endl;
}

Cat::Cat(Cat & copy): Animal()
{  
    *this = copy;
    std::cout << "Cat Copy constructor called" << std::endl;
}

Cat::~Cat(void)
{
    std::cout << "Cat Destructor called" << std::endl;    
}

Cat & Cat::operator=(const Cat & rhs) 
{
    (void)rhs;
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
