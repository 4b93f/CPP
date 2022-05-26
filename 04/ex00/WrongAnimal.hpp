/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chly-huc <chly-huc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 02:02:42 by shyrno            #+#    #+#             */
/*   Updated: 2022/05/24 18:56:06 by chly-huc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include "iostream"
class WrongAnimal
{
    public:
        WrongAnimal(void);
        WrongAnimal(WrongAnimal const & copy);
        ~WrongAnimal(void);
        WrongAnimal & operator=(const WrongAnimal & rhs);
        void makeSound(void) const;
        std::string getType(void) const;
    protected:
        std::string type;
};

#endif