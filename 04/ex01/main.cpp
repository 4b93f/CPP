/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shyrno <shyrno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 01:23:57 by shyrno            #+#    #+#             */
/*   Updated: 2021/11/08 20:47:28 by shyrno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	int array_size = 10;
	Animal *array[array_size];
	int i = 0;
	std::cout << std::endl << std::endl << std::endl;
	std::cout << "First while" << std::endl << std::endl;
	while(i < array_size/2)
	{
		array[i] = new Dog();
		i++;
	}	
	std::cout << std::endl << std::endl << std::endl;
	
	std::cout << "Second while" << std::endl << std::endl;
	while(i < array_size)
	{
		array[i] = new Cat();
		i++;
	}
	std::cout << std::endl << std::endl << std::endl;

	std::cout << "Delete while" << std::endl << std::endl;
	while(i--)
		delete array[i];
	std::cout << std::endl << std::endl << std::endl;

	std::cout << "Test main" << std::endl << std::endl;
	const Animal* j = new Dog();
	const Animal* k = new Cat();
	delete k;
	delete j;//should not create a leak
	std::cout << std::endl << std::endl << std::endl;

	std::cout << "Deep copy test" << std::endl << std::endl;
	const Cat old_cat;
	const Cat new_cat = old_cat;
	Dog original;
	{
		Dog copy = original;
		Dog copy2 = original;
	}
}