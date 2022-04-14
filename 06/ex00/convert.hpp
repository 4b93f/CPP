/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shyrno <shyrno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 01:26:14 by shyrno            #+#    #+#             */
/*   Updated: 2021/10/25 00:45:36 by shyrno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"
#include "string"
#include <iomanip>

class Convert
{
    public:
        Convert(void);
        Convert(std::string str);
        Convert(Convert & copy);
        ~Convert(void);
        void exception(std::string str);
        void print_value(void) const;
        void print_char(void) const;
        void print_int(void) const;
        void print_double(void) const;
        void print_float(void) const;
        Convert & operator=(const Convert & rhs);
    private:
        char char_v;
        int int_v;
        float float_v;
        double double_v;
        bool inf_neg;
        bool inf_pos;
        bool nan;
};