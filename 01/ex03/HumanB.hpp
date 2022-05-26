/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shyrno <shyrno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 19:35:43 by shyrno            #+#    #+#             */
/*   Updated: 2021/10/24 03:58:28 by shyrno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanB
{
    public:
        HumanB(std::string name_ = "Blank");
        ~HumanB(void);
        void attack(void);
        void setWeapon(Weapon &type);
    private:
        std::string name;
        Weapon *WEAPON_TYPE;
};

#endif
