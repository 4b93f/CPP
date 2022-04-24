/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shyrno <shyrno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 23:04:54 by chly-huc          #+#    #+#             */
/*   Updated: 2022/04/23 03:01:29 by shyrno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
#include "string.h"
#include "iostream"

class ClapTrap
{
	public:
		ClapTrap(void);
		ClapTrap(ClapTrap & copy);
		ClapTrap(std::string name);
		~ClapTrap(void);
		void attack(const std::string & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		// void print_stat(void);
		ClapTrap & operator=(const ClapTrap & rhs);
	protected:
		std::string Name;
		int Hitpoints;
		int Energy_points;
		int attack_damage;
};

#endif
