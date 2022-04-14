/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shyrno <shyrno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 02:11:07 by shyrno            #+#    #+#             */
/*   Updated: 2021/10/22 02:44:48 by shyrno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
        std::cout << "Error with argument" << std::endl;
    else
    {
        Convert test(argv[1]);
        test.print_value();
    }
}