/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chly-huc <chly-huc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 22:44:31 by shyrno            #+#    #+#             */
/*   Updated: 2022/05/31 14:17:17 by chly-huc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP
#include "iostream"

template <typename T, typename I>
void iter(T *str, I length, void (*f)(T &))
{
    I count;

    count = 0;
    while (count < length && str[count])
    {
        (*f)(str[count]);
        count++;
    }
}
template <typename T>
void crypting(T & rhs)
{
    rhs = 120;
}

template <typename T>
void incr(T & rhs)
{
    rhs++;
}

#endif