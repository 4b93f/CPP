/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shyrno <shyrno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 01:10:12 by shyrno            #+#    #+#             */
/*   Updated: 2021/11/08 21:00:29 by shyrno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

class Cat : public Animal
{
    public:
        Cat(void);
        Cat(Cat & copy);
        virtual ~Cat(void);
        Cat & operator=(const Cat & rhs);
        virtual void makeSound(void) const;
        virtual std::string getType(void) const;
    protected:
        std::string type;
};
