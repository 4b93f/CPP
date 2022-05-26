/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shyrno <shyrno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 03:25:40 by shyrno            #+#    #+#             */
/*   Updated: 2021/10/18 03:37:01 by shyrno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include "ICharacter.hpp"
# include "iostream"

class AMateria
{
    public:
        AMateria();
        AMateria(const std::string name);
        AMateria(AMateria & copy);
        ~AMateria();
        std::string const & getType() const;
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
        AMateria & operator=(const AMateria & rhs);
    protected:
};

#endif