/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shyrno <shyrno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 00:43:14 by shyrno            #+#    #+#             */
/*   Updated: 2021/10/25 01:22:11 by shyrno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyFind.hpp"
#include <vector>

int main()
{
	std::vector<int> v1(10, 40);
	easyFind(v1, 40);

	std::vector<int> v2(10, 30);
	try
	{
		easyFind(v2, 40);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::vector<int> v3;
	try
	{
		easyFind(v3, 40);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::vector<int> v4(0,0);
	try
	{
		easyFind(v4, 40);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::list<int> v5;

	v5.push_back(100);
	v5.push_back(10);
	
	try
	{
		easyFind(v5, 10);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}