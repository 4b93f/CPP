/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shyrno <shyrno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 01:10:12 by shyrno            #+#    #+#             */
/*   Updated: 2021/10/28 19:28:24 by shyrno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    public:
        Cat();
        Cat(std::string type);
        Cat(Cat & copy);
        virtual ~Cat();
        Cat & operator=(const Cat & rhs);
        void makeSound() const;
        virtual std::string getType(void) const;
    protected:
        std::string type;
    private:
        Brain *attribute;
};
