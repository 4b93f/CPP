/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chly-huc <chly-huc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 14:16:32 by chly-huc          #+#    #+#             */
/*   Updated: 2022/05/31 15:07:24 by chly-huc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>
#include <exception>

template <typename T>
class Array
{
    public:
        class WrongIndex : public std::exception
        {
            public:
                virtual const char *what() const throw()
			    {
				    return("Wrong index!");
			    }
        };
        Array()
        {
            std::cout << "Default constructor called" << std::endl;
            _size = 0;
            tab = NULL;
        }
        Array(unsigned int n)
        {
            std::cout << "Fill constructor called" << std::endl;
            _size = 0;
            tab = NULL;
            if (n == 0)
                return;
            tab = new T[n];
            _size = n;
        }
        Array(const Array<T> & rhs)
        {
            std::cout << "Copy constructor called" << std::endl;
            _size = rhs._size;
            tab = new T[_size];
            for (unsigned int i = 0; i < _size; i++)
                tab[i] = rhs.tab[i];
        }
        Array<T> & operator=(Array<T> const & rhs)
        {
            if (tab)
                delete[] tab;
            _size = rhs._size;
            tab = new T[_size];
            for (unsigned int i = 0; i < _size; i++)
                tab[i] = rhs.tab[i];
            return *this;
        }
        T & operator[](int index)
        {
            if (index > _size || index < 0)
                throw WrongIndex();
            return tab[index];
        }
        ~Array()
        {
            if (tab)
                delete[] tab;
            _size = 0;
        }
        unsigned int size() const 
        {
            return _size;
        }
        void print()
        {
            unsigned int i = 0;
            while (i++ < _size)
                std::cout << tab[i] << std::endl;
        }
        
    private:
        T *tab;
        unsigned int _size;
};

#endif