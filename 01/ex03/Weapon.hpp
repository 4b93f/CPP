/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shyrno <shyrno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 05:39:27 by shyrno            #+#    #+#             */
/*   Updated: 2021/10/24 03:58:42 by shyrno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include "iostream"
#include "string"

class Weapon
{
    public:
        Weapon(void);
        Weapon(std::string type);
        ~Weapon(void);
        const std::string &getType(void);
        void setType(std::string type);
    private:
        std::string type;
    
};

#endif