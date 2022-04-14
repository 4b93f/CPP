/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shyrno <shyrno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 03:44:10 by shyrno            #+#    #+#             */
/*   Updated: 2022/04/13 03:13:09 by shyrno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "iostream"
#include <string>
#include <iomanip>
#include <cctype>
#include <limits>
#include <stdio.h>
#include <stdlib.h>
#include "contact.hpp"

class Phonebook
{
    public:
        Phonebook(void);
        ~Phonebook(void);
        void add(int i);
        void search(int j);
    private:
        Contact List[8];
};

#endif