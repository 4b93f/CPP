/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shyrno <shyrno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 05:18:58 by shyrno            #+#    #+#             */
/*   Updated: 2021/10/14 05:36:15 by shyrno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
    std::string florian = "HI THIS IS BRAIN";
    std::string *charli = &florian;
    std::string &didier = florian;

    std::cout << &florian << " | " << charli << " | " << &didier << std::endl;
    std::cout << *charli << std::endl;
    std::cout << didier << std::endl;
}