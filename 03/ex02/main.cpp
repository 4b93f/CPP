/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shyrno <shyrno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 23:23:14 by chly-huc          #+#    #+#             */
/*   Updated: 2022/04/23 02:58:39 by shyrno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
	FragTrap null;
	FragTrap Florian("Florian");
	FragTrap test("test");

	test = Florian;

	Florian.takeDamage(100);
	// Florian.print_stat();
	Florian.beRepaired(1000000);
	// Florian.print_stat();
	test.takeDamage(130);
	// test.print_stat();
	test.beRepaired(40);
	// test.print_stat();
	test.attack("Jean michel crapaud");
	Florian.attack("Dragon");
	Florian.highFivesGuys();
	return 1;
}