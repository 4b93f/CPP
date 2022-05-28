/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chly-huc <chly-huc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 00:53:39 by shyrno            #+#    #+#             */
/*   Updated: 2022/05/28 18:22:05 by chly-huc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void ft_putchar(char & c)
{
	std::cout << c;
}

void ft_putstr(char *str)
{
	std::cout << str << std::endl;
}

int main()
{
	char phrase[] = "Salut";
	float tab[] = {1.1f, 2.1f, 3.1f, 4.1f, 5.1f};
	int nbr = 5;
   	iter(phrase, nbr, &ft_putchar);

	std::cout << std::endl << tab[0] << " ";
	std::cout << tab[1] << " ";
	std::cout << tab[2] << " ";
	std::cout << tab[3] << " ";
	std::cout << tab[4] << std::endl;
	std::cout << "CRYPTYING: " << std::endl;
	iter(phrase, 2, &crypting);
	ft_putstr(phrase);
    iter(tab, 5, &incr);
    std::cout << std::endl << tab[0] << " ";
    std::cout << tab[1] << " ";
	std::cout << tab[2] << " ";
	std::cout << tab[3] << " ";
	std::cout << tab[4] << std::endl;
}