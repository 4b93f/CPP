/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shyrno <shyrno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 21:03:49 by shyrno            #+#    #+#             */
/*   Updated: 2021/10/26 02:48:05 by shyrno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(void)
{
    std::cout << "Span Default constructor called" << std::endl;
    N = 0;
}

Span::Span(unsigned int N)
{
    this->N = N;
}

Span::Span(const Span & rhs) 
{
    std::cout << " Span Copy constructor called" << std::endl;
    this->N = rhs.N;
    this->tab = rhs.tab;
    *this = rhs;
}

void Span::addNumber(int fill)
{
    if (this->tab.size() >= N)
        throw TooBig();
    tab.push_back(fill);
}

void Span::addNumber(std::vector<int>::iterator it, std::vector<int>::iterator ite)
{
    while (it != ite)
    {
        if (this->tab.size() >= N)
            throw TooBig();
        this->tab.push_back(*it);
        it++;
    }
}

int Span::shortestSpan(void)
{
    int shorty = INT32_MAX;
    if (this->tab.empty())
        throw Empty();
    if (this->tab.size() == 1)
        throw Solo();
    std::vector<int>::iterator itf = this->tab.begin();
    std::vector<int>::iterator ite = this->tab.end();
    std::vector<int>::iterator it;
    std::sort(itf, ite);
    while (itf != ite)
    {
        it = itf;
        while(it != ite)
        {
            if (it + 1 != ite && it - it + 1 < shorty)
                shorty = *it - *(it + 1);
            it++;
        }
        itf++;
    }
    return (shorty < 0 ? -shorty : shorty);
}

int Span::longestSpan(void)
{
    if (this->tab.empty())
        throw Empty();
    if (this->tab.size() == 1)
        throw Solo();
    std::vector<int>::iterator it = this->tab.begin();
    std::vector<int>::iterator ite = this->tab.end();
    std::sort(it, ite);
    int stock = *it - tab.back();
    return (stock < 0 ? -stock : stock);
}

Span::~Span(void) 
{
    tab.clear();
    std::cout << "Span Destructor called" << std::endl;
}

Span & Span::operator=(const Span & rhs) 
{
    std::cout << "Span Assignation operator called" << std::endl;
    this->tab = rhs.tab;
    this->N = rhs.N;
    return *this;
}

const char* Span::TooBig::what() const throw()
{
    return ("You can't add more number ...");
}

const char* Span::Empty::what() const throw()
{
    return ("Container is empty ...");
}

const char* Span::Solo::what() const throw()
{
    return ("Can't find Span : Only one number found...");
}