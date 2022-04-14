/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shyrno <shyrno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 03:25:11 by shyrno            #+#    #+#             */
/*   Updated: 2021/10/24 04:42:42 by shyrno           ###   ########.fr       */
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

Fixed::Fixed(const int rhs)
{
    std::cout << "Int constructor called" << std::endl;
    this->fixed_point = rhs << this->raw_bits;
}

Fixed::Fixed(const float rhs)
{
    std::cout << "Float constructor called" << std::endl;
    this->fixed_point = roundf(rhs *(1 <<  this->raw_bits));
}

Fixed::~Fixed(void) 
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const 
{
    return this->fixed_point;
}

void Fixed::setRawBits(const int raw) 
{
    std::cout << "setRawBits member function called" << std::endl;
    this->fixed_point = raw;
}

int Fixed::toInt(void) const
{
    return (roundf(this->fixed_point >> this ->raw_bits));
}

float Fixed::toFloat(void) const
{
    return ((float)this->fixed_point / (1 << this->raw_bits));
}

Fixed & Fixed::operator=(const Fixed & rhs) 
{
    std::cout << "Assignation operator called" << std::endl;
    this->fixed_point = rhs.getRawBits();
    return *this;
}

std::ostream & operator<<(std::ostream & o, Fixed const & rhs)
{
    o << rhs.toFloat();
    return o;
}
