/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shyrno <shyrno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 03:38:27 by shyrno            #+#    #+#             */
/*   Updated: 2022/04/13 03:35:42 by shyrno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#include "phonebook.hpp"

Contact::Contact(void)
{

}

Contact::~Contact(void)
{

}

void Contact::printInfo(std::string info)
{
    std::cout << std::setw(10);
    if (info.size() > 10)
    {
        info.resize(9);
        info += ".";
    }
    std::cout << info << "|";
}

void Contact::printName(Contact List[8], int i)
{
    int j;

    j = -1;
    while(++j <= i)
    {
        if (List[j].display == 1)
        {
            std::cout << j + 1;
            printInfo(List[j].fn);
            printInfo(List[j].ln);
            printInfo(List[j].nickname);
            std::cout << std::endl;
        }
    }
    std::cout << std::endl;
}

void Contact::printContactInfo(Contact List[8], int i)
{
	system("clear");
    std::cout << std::endl;
    std::cout << " - [First Name] = " << List[i].fn << std::endl;
    std::cout << " - [Last name] = " << List[i].ln << std::endl;
    std::cout << " - [Nickname] = " << List[i].nickname << std::endl;
    std::cout << " - [Phone number] = " <<  List[i].phone << std::endl;
    std::cout << " - [Darkest Secret] = " <<  List[i].secret << std::endl;
    std::cout << std::endl;
}

void Contact::setInfo(std::string *info)
{
    fn = info[0];

    std::cout << fn << std::endl;
}

void Contact::add_contact()
{
    std::cout << std::endl;
    while(1)
    {
        std::cout << "What's the first name ? (NO BLANK ANSWER ALLOWED)" << std::endl;
        std::getline(std::cin, this->fn);
        if (!this->fn.compare(""))
            continue;
        system("clear");
        break;
    }
    while(1)
    {
        std::cout << "What's the last name ? NO BLANK ANSWER ALLOWED)" << std::endl;
        std::getline(std::cin, this->ln);
        if (!this->ln.compare(""))
            continue;
        system("clear");
        break;
    }
    while(1)
    {
        std::cout << "What's the nickname ? (NO BLANK ANSWER ALLOWED)" << std::endl;
        std::getline(std::cin, this->nickname);
        if (!this->nickname.compare(""))
            continue;
        system("clear");
        break;
    }
    while(1)
    {
        std::cout << "What's the phone number ? (NO BLANK ANSWER ALLOWED)" << std::endl;
        std::getline(std::cin, this->phone);
        if (!this->phone.compare(""))
            continue;
        system("clear");
        break;
    }
    while(1)
    {
        std::cout << "What's the darkest secret ?  (NO BLANK ANSWER ALLOWED)" << std::endl;
        std::getline(std::cin, this->secret);
        if (!this->secret.compare(""))
            continue;
        system("clear");
        break;
    }
    this->display = 1;
    std::cout << std::endl;
    system("clear");
}
