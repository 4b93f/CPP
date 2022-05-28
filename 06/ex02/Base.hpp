/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chly-huc <chly-huc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 17:32:08 by chly-huc          #+#    #+#             */
/*   Updated: 2022/05/28 18:35:25 by chly-huc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP
# include "iostream"
# include "string"

class Base
{
    public:
        // Base();
        virtual ~Base();
        Base * generate();
};

void identify(Base * p);
void identify(Base & p);

#endif 
