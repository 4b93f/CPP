/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyFind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chly-huc <chly-huc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 00:36:06 by shyrno            #+#    #+#             */
/*   Updated: 2022/05/31 15:12:57 by chly-huc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include "iostream"
#include "string"
#include "list"
#include "algorithm"

class isEmpty : public std::exception
{
    virtual const char *what() const throw()
    {
        return ("Container is Empty ...");
    }
};

class NotFound : public std::exception
{
    virtual const char *what() const throw()
    {
        return ("No occurence found ...");
    }
};

template <typename T>
void easyFind(T a, int numb)
{
    typename T::iterator value;
    if (a.empty())
        throw isEmpty();
    else
    {
        if ((value = std::find(a.begin(), a.end(), numb)) != a.end())
            std::cout << "Occurence found : " << *value << std::endl;
        else
            throw NotFound();
    }
}

#endif