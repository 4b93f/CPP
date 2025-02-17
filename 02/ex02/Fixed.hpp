/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chly-huc <chly-huc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 03:18:28 by shyrno            #+#    #+#             */
/*   Updated: 2022/04/24 18:37:16 by chly-huc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include "iostream"
#include "string"
#include "math.h"

class Fixed
{
    public:
        Fixed(void);
        Fixed(const Fixed & rhs);
        Fixed(const int rhs);
        Fixed(const float rhs);
        ~Fixed(void);
        int getRawBits(void) const;
        void setRawBits(const int raw);
        Fixed & operator=(const Fixed & rhs);
        bool operator>(const Fixed & rhs) const;
        bool operator<(const Fixed & rhs) const;
        bool operator>=(const Fixed & rhs) const;
        bool operator<=(const Fixed & rhs) const;
        bool operator==(const Fixed & rhs) const;
        bool operator!=(const Fixed & rhs) const;
        Fixed operator+(const Fixed & rhs) const;
        Fixed operator-(const Fixed & rhs) const;
        Fixed operator*(const Fixed & rhs) const;
        Fixed operator/(const Fixed & rhs) const;
        Fixed & operator++(void);
        Fixed & operator--(void);
        Fixed operator++(int);
        Fixed operator--(int);
        static Fixed & min(Fixed &rhf, Fixed &rhs)
        {
            if (rhf < rhs)
                return rhf;
            return (rhs);
        }
        static Fixed & max(Fixed &rhf, Fixed &rhs)
        {
            if (rhf < rhs)
                return rhf;
            return (rhs);
        }
        static const Fixed & min(const Fixed & rhf, const Fixed & rhs)
        {
            if (rhf < rhs)
                return (rhf);
            return rhs;
        }
        static const Fixed & max(const Fixed & rhf, const Fixed & rhs)
        {
            if (rhf > rhs)
                return (rhf);
            return rhs;
        }
        float toFloat(void) const;
        int toInt(void) const; 
    private:
        int fixed_point;
        const static int raw_bits = 8;
};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs);


#endif