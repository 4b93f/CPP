/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chly-huc <chly-huc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 02:11:13 by shyrno            #+#    #+#             */
/*   Updated: 2022/05/24 19:04:20 by chly-huc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void): WrongAnimal()
{
    this->type = "WrongCat";
    std::cout << "WrongCat Default constructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const & copy): WrongAnimal()
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
    (void)rhs;
    return *this;
}

void WrongCat::makeSound(void) const
{
    std::cout << type << " sound : Meeeeurrrk " << std::endl;     
}

std::string WrongCat::getType(void) const
{
    return(this->type);
}
