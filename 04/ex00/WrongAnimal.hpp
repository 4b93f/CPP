/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shyrno <shyrno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 02:02:42 by shyrno            #+#    #+#             */
/*   Updated: 2021/11/08 23:58:34 by shyrno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include "iostream"
# include "string"

class WrongAnimal
{
    public:
        WrongAnimal(void);
        WrongAnimal(WrongAnimal & copy);
        ~WrongAnimal(void);
        WrongAnimal & operator=(const WrongAnimal & rhs);
        void makeSound(void) const;
        std::string getType(void) const;
    protected:
        std::string type;
};

#endif