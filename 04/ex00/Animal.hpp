/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chly-huc <chly-huc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 01:04:46 by shyrno            #+#    #+#             */
/*   Updated: 2022/05/24 18:53:28 by chly-huc         ###   ########.fr       */
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