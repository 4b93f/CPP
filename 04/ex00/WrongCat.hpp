/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chly-huc <chly-huc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 02:10:16 by shyrno            #+#    #+#             */
/*   Updated: 2022/05/24 18:54:14 by chly-huc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public:
        WrongCat(void);
        WrongCat(WrongCat const & copy);
        ~WrongCat(void);
        WrongCat & operator=(const WrongCat & rhs);
        void makeSound(void) const;
        std::string getType(void) const;
    protected:
        std::string type;
};