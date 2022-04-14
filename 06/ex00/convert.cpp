/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shyrno <shyrno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 01:35:25 by shyrno            #+#    #+#             */
/*   Updated: 2021/10/25 17:30:27 by shyrno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

Convert::Convert(void)
{
    this->int_v = 0;
    this->char_v = 0;
    this->float_v = 0;
    this->double_v = 0;
    this->inf_neg = false;
    this->inf_pos = false;
    this->nan = false;
    std::cout << "Convert Default constructor called" << std::endl;
}

Convert::Convert(std::string str)
{
    
    this->int_v = atoi(str.c_str());
    this->char_v = static_cast<char>(int_v);
    this->float_v = static_cast<float>(int_v);
    this->double_v = static_cast<double>(int_v);
    this->inf_neg = false;
    this->inf_pos = false;
    this->nan = false;
    this->exception(str);
    std::cout << "Convert Parametric constructor called" << std::endl;
}

Convert::~Convert(void) 
{
    std::cout << "Convert Destructor called" << std::endl;    
}

Convert & Convert::operator=(const Convert & rhs) 
{
    return *this;
}

void Convert::print_value(void) const
{
    this->print_char();
    this->print_int();
    this->print_float();
    this->print_double();
}

void Convert::print_char(void) const
{
    if (this->nan || this->inf_neg || this->inf_pos)
    {
        std::cout << "Char : Impossible" << std::endl;
        return ;
    }
    if (this->char_v >= 33 && this->char_v <= 126)
        std::cout << "Char : " << this->char_v << std::endl;
    else
        std::cout << "Char : Not Displayable" << std::endl;
}

void Convert::print_int(void) const
{
    if (this->nan || this->inf_neg || this->inf_pos)
    {
        std::cout << "Int : Impossible" << std::endl;
        return ;
    }
    std::cout << "Int : " << this->int_v << std::endl;
}

void Convert::print_float(void) const
{
    if (this->nan)
        std::cout << "Float : nanf" << std::endl;
    else if (this->inf_pos)
        std::cout << "Float : +inff" << std::endl;
    else if (this->inf_neg)
        std::cout << "Float : -inff" << std::endl;
    else
        std::cout << std::fixed << std::setprecision(1) << "Float : " << this->float_v << "f" <<std::endl;
}
void Convert::print_double(void) const
{
    if (this->nan)
        std::cout << "Double : nan" << std::endl;
    else if (this->inf_pos)
        std::cout << "Double : +inf" << std::endl;
    else if (this->inf_neg)
        std::cout << "Double : -inf" << std::endl;
    else
        std::cout << std::fixed << std::setprecision(1) << "Double : " << this->double_v << std::endl;
}

void Convert::exception(std::string str)
{
    if (!str.compare("nan") || !str.compare("nanf"))
        this->nan = 1;
    if (!str.compare("+inf") || !str.compare("+inff") || !str.compare("inf"))
        this->inf_pos = 1;
    if (!str.compare("-inf") || !str.compare("-inff"))
        this->inf_neg = 1;
}