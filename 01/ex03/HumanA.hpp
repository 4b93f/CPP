/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shyrno <shyrno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 18:46:19 by shyrno            #+#    #+#             */
/*   Updated: 2021/10/24 04:17:11 by shyrno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanA
{
    public:
        HumanA(void);
        HumanA(std::string name, Weapon &WEAPON_TYPE);
        ~HumanA(void);
        void attack(void);
    private:
        std::string name;
        Weapon &WEAPON_TYPE;
};

#endif
