/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chly-huc <chly-huc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 01:21:53 by shyrno            #+#    #+#             */
/*   Updated: 2022/05/24 18:42:50 by chly-huc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
