/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chly-huc <chly-huc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 01:00:52 by shyrno            #+#    #+#             */
/*   Updated: 2022/05/31 16:13:24 by chly-huc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP
#include "iostream"
#include "string"
#include <vector>
#include "stdexcept"
#include "algorithm"
#include "limits.h"

class Span
{
    public:
        class TooBig : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
        class Empty: public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
        class Solo: public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
        Span(void);
        Span(unsigned int N);
        Span(const Span & copy);
        void addNumber(int fill);
        void addNumber(std::vector<int>::iterator it, std::vector<int>::iterator ite);
        int shortestSpan(void);
        int longestSpan(void);
        ~Span(void);
        Span & operator=(const Span & rhs);
    private:
        std::vector<int> tab;
        unsigned int N;
};

#endif