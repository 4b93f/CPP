/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shyrno <shyrno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 03:25:11 by shyrno            #+#    #+#             */
/*   Updated: 2022/04/23 03:08:15 by shyrno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void): fixed_point(0)
{

}

Fixed::Fixed(const Fixed & rhs) 
{
    *this = rhs;
}

Fixed::Fixed(const int rhs)
{
    this->fixed_point = rhs << this->raw_bits;
}

Fixed::Fixed(const float rhs)
{
    this->fixed_point = roundf(rhs * (1 << this->raw_bits));
}

Fixed::~Fixed(void) 
{
    
}

int Fixed::getRawBits(void) const 
{
    return this->fixed_point;
}

void Fixed::setRawBits(const int raw) 
{
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
    this->fixed_point = rhs.getRawBits();
    return *this;
}

std::ostream & operator<<(std::ostream & o, Fixed const & rhs)
{
    o << rhs.toFloat();
    return o;
}

bool Fixed::operator>(const Fixed & rhs) const
{
    if (this->toFloat() - rhs.toFloat() > 0)
        return true;
    return false;
}

bool Fixed::operator<(const Fixed & rhs) const
{
    if (this->toFloat() - rhs.toFloat() < 0)
        return true;
    return false;
}

bool Fixed::operator==(const Fixed & rhs) const
{
    if (this->toFloat() - rhs.toFloat() == 0)
        return true;
    return false ;
}

bool Fixed::operator>=(const Fixed & rhs) const
{
    if (this->toFloat() - rhs.toFloat() >= 0)
        return true;
    return false ;
}

bool Fixed::operator<=(const Fixed & rhs) const
{
    if (this->toFloat() - rhs.toFloat() <= 0)
        return true;
    return false ;
}

bool Fixed::operator!=(const Fixed & rhs) const
{
    if (this->toFloat() - rhs.toFloat() != 0)
        return true;
    return false ;
}

Fixed Fixed::operator+(const Fixed & rhs) const
{
    return Fixed(this->toFloat() + rhs.toFloat());
}

Fixed Fixed::operator-(const Fixed & rhs) const
{
    return Fixed(this->toFloat() - rhs.toFloat());
}

Fixed Fixed::operator*(const Fixed & rhs) const
{
    return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed Fixed::operator/(const Fixed & rhs) const
{
    return Fixed(this->toFloat() / rhs.toFloat());
}

Fixed & Fixed::operator++(void)
{
    this->fixed_point++;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed old = *this;
    this->fixed_point++;
    return (old);
}

Fixed & Fixed::operator--(void)
{
    this->fixed_point--;
    return *this;
}

Fixed Fixed::operator--(int)
{
    Fixed old = *this;
    this->fixed_point--;
    return (old);
}
