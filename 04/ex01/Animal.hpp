/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shyrno <shyrno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 01:04:46 by shyrno            #+#    #+#             */
/*   Updated: 2021/11/08 23:58:34 by shyrno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
#include "iostream"

class Animal
{
    public:
        Animal(void);
        Animal(Animal & copy);
        virtual ~Animal(void);
        Animal & operator=(const Animal & rhs);
        virtual void makeSound(void) const;
        virtual std::string getType(void) const;
    protected:
        std::string type;
};

#endif