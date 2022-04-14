/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shyrno <shyrno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 21:01:20 by shyrno            #+#    #+#             */
/*   Updated: 2021/10/26 02:50:08 by shyrno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int main()
{

	try
	{
		std::cout << "-- Max N --" << std::endl << std::endl;
		Span sp = Span(3);
		sp.addNumber(10);
		sp.addNumber(700);
		sp.addNumber(-1);
		sp.addNumber(2);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << "-- Empty Container --" << std::endl << std::endl;
		Span sp;
		std::cout << sp.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << "-- One Number --" << std::endl << std::endl;
		Span sp(9);
		sp.addNumber(69);
		std::cout << sp.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << "-- Good -- " << std::endl << std::endl;
		Span sp = Span(11000);
		std::vector<int> tab(10000, 40);
		sp.addNumber(tab.begin(), tab.end());
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		std::cout << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << "-- Another Good -- " << std::endl << std::endl;
		Span sp = Span(5);
		sp.addNumber(10);
		sp.addNumber(700);
		sp.addNumber(-1);
		sp.addNumber(2);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		std::cout << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}