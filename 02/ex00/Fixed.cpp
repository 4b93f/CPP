/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shyrno <shyrno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 03:25:11 by shyrno            #+#    #+#             */
/*   Updated: 2021/10/24 04:42:08 by shyrno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void): fixed_point(0)
{
    std::cout << "Default constructor called" << std::endl;
}


Fixed::Fixed(const Fixed & rhs) 
{
    std::cout << "Copy constructor called" << std::endl;
    *this = rhs;
}


Fixed::~Fixed(void) 
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const 
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->fixed_point;
}

void Fixed::setRawBits(const int raw) 
{
    std::cout << "setRawBits member function called" << std::endl;
    this->fixed_point = raw;
}

Fixed & Fixed::operator=(const Fixed & rhs) 
{
    std::cout << "Assignation operator called" << std::endl;
    this->fixed_point = rhs.getRawBits();
    return *this;
}
