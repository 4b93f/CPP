/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shyrno <shyrno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 22:44:31 by shyrno            #+#    #+#             */
/*   Updated: 2021/10/25 01:01:39 by shyrno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"
#include "string"

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
