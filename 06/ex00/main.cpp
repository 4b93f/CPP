/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chly-huc <chly-huc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 02:11:07 by shyrno            #+#    #+#             */
/*   Updated: 2022/05/28 17:16:14 by chly-huc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
        std::cout << "Error with argument" << std::endl;
    else
    {
        Convert lol;
        Convert test(argv[1]);
        test.print_value();
    }
}