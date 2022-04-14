/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shyrno <shyrno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 02:11:13 by shyrno            #+#    #+#             */
/*   Updated: 2021/11/08 23:58:34 by shyrno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
    this->type = "WrongCat";
    std::cout << "WrongCat Default constructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat & copy): WrongAnimal()
{  
    *this = copy;
    std::cout << "WrongCat Copy constructor called" << std::endl;
}

WrongCat::~WrongCat(void) 
{
    std::cout << "WrongCat Destructor called" << std::endl;    
}

WrongCat & WrongCat::operator=(const WrongCat & rhs) 
{
    this->type = rhs.type;
    return *this;
}

void WrongCat::makeSound(void) const
{
    std::cout << type << " sound : Meeeeurrrk " << std::endl;     
}