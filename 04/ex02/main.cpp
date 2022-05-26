/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shyrno <shyrno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 01:23:57 by shyrno            #+#    #+#             */
/*   Updated: 2021/10/24 22:24:05 by shyrno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    
    // ERROR TEST
    // const Animal* k = new Animal();
    delete j;
    delete i;
}