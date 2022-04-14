/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shyrno <shyrno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 03:18:28 by shyrno            #+#    #+#             */
/*   Updated: 2021/10/24 04:42:01 by shyrno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include "iostream"
# include "string"

class Fixed
{
    public:
        Fixed(void);
        Fixed(const Fixed & rhs);
        ~Fixed(void);
        int getRawBits(void) const;
        void setRawBits(const int raw);
        Fixed & operator=(const Fixed & rhs);
    private:
        int fixed_point;
        const static int raw_bits = 8;
};

#endif