/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   template.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shyrno <shyrno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 22:08:11 by shyrno            #+#    #+#             */
/*   Updated: 2021/10/22 22:36:24 by shyrno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"
#include "string"

template <typename T>
T max(const T &a, T &b)
{
    return((a >= b) ? a : b); 
}

template <typename T>
T min(const T &a, T &b)
{
    return(a <= b ? a : b);
}

template <typename T>
void swap(T &a, T &b)
{
	T temp = a;
	a = b;
	b = temp;
}