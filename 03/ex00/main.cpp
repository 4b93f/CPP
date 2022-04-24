/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shyrno <shyrno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 23:23:14 by chly-huc          #+#    #+#             */
/*   Updated: 2022/04/23 02:32:53 by shyrno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap null;
	ClapTrap Florian("Florian");
	ClapTrap test("test");

	test = Florian;

	Florian.takeDamage(100);
	// Florian.print_stat();
	Florian.beRepaired(1000000);
	// Florian.print_stat();
	std::cout << "TEST" << std::endl;
	test.takeDamage(130);
	// test.print_stat();
	for(int i = 0; i < 20; i++)
		test.beRepaired(40);
	// test.print_stat();

	test.attack("Jean michel crapaud");
	Florian.attack("Dragon");
	return 1;
}