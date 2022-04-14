/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shyrno <shyrno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 02:28:58 by shyrno            #+#    #+#             */
/*   Updated: 2021/10/24 22:07:31 by shyrno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
# include "iostream"
# include "string"

class Brain
{
    public:
        Brain(void);
        Brain(Brain & copy);
        ~Brain(void);
        Brain & operator=(const Brain & rhs);
    private:
        std::string idea[100];
};

#endif