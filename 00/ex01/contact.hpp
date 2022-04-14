/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shyrno <shyrno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 03:25:35 by shyrno            #+#    #+#             */
/*   Updated: 2022/04/12 19:41:26 by shyrno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <string>
#include <iomanip>
#include <cctype>
#include <limits>
#include <stdio.h>
#include <stdlib.h>

class Contact
{
    public:
        Contact(void);
        ~Contact(void);
        void add_contact(void);
        void setInfo(std::string *info);
        void printInfo(std::string info);
        void printName(Contact List[8], int i);
        void printContactInfo(Contact List[8], int i);
    private:
        std::string fn;
        std::string ln;
        std::string nickname;
        std::string phone;
        std::string secret;
        int display;
};

#endif
