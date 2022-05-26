/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shyrno <shyrno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 01:21:16 by shyrno            #+#    #+#             */
/*   Updated: 2022/04/13 05:57:59 by shyrno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP
#include "iostream"
#include "string"

class Harl
{
    public:
        Harl(void);
        ~Harl(void);
        void complain(std::string level);
    private:
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);
};

#endif