/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shyrno <shyrno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 01:52:50 by shyrno            #+#    #+#             */
/*   Updated: 2021/10/24 22:33:57 by shyrno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main (void)
{
    std::cout << "--Test all fine with Charli--" << std::endl << std::endl;
    try
    {
        Bureaucrat charli("Charli", 100);
        std::cout << charli << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << std::endl << "--Test too big with Freddy--" << std::endl << std::endl;
    try
    {
        Bureaucrat charli("Freddy", 1);
        
        std::cout << charli << std::endl;
        charli.decGrade();
        std::cout << charli << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << std::endl << "--Test too low with Franky--" << std::endl << std::endl;
    try
    {
        Bureaucrat charli("Franky", 150);
        std::cout << charli << std::endl;
        charli.incGrade();
        std::cout << charli << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << std::endl << "--Test too big at creation with Anatoli--" << std::endl << std::endl;
    try
    {
        Bureaucrat charli("Anatoli", 151);
        std::cout << charli << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}