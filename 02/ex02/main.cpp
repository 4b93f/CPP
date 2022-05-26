/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shyrno <shyrno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 03:38:02 by shyrno            #+#    #+#             */
/*   Updated: 2022/04/23 02:03:27 by shyrno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) 
{
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    
    std::cout << b << std::endl;
    
    std::cout << Fixed::max( a, b ) << std::endl;

    {
        std::cout << "Additionnal test YEP" << std::endl;
		Fixed a;
		Fixed const b(Fixed(4.44f) + Fixed(2));

		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << b - Fixed(1) << std::endl;
		std::cout << b / Fixed(2) << std::endl;
		std::cout << Fixed::max(a + Fixed(10.02f), b/ Fixed(2)) << std::endl;
	}
    return 0;
}
