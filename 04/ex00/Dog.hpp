/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shyrno <shyrno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 01:21:53 by shyrno            #+#    #+#             */
/*   Updated: 2021/11/08 23:58:34 by shyrno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

#include "iostream"
#include "string"
#include "Animal.hpp"

class Dog : public Animal
{
    public:
        Dog(void);
        Dog(Dog & copy);
        virtual ~Dog(void);
        Dog & operator=(const Dog & rhs);
        virtual void makeSound(void) const;
        virtual std::string getType(void) const;
    protected:
        std::string type;
};
