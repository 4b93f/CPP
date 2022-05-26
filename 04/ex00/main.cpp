/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chly-huc <chly-huc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 01:23:57 by shyrno            #+#    #+#             */
/*   Updated: 2022/05/24 19:06:27 by chly-huc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();
    const WrongAnimal* Wrong = new WrongCat();
    std::cout << dog->getType() << " " << std::endl;
    std::cout << cat->getType() << " " << std::endl;
    cat->makeSound(); //will output the cat sound!
    dog->makeSound();
    meta->makeSound();
    std::cout << Wrong->getType() << std::endl;
    Wrong->makeSound();
    delete dog;
    delete meta;
    delete Wrong;
    delete cat;
    return 0;
}