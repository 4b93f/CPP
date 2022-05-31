/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chly-huc <chly-huc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 16:19:09 by chly-huc          #+#    #+#             */
/*   Updated: 2022/05/31 17:37:01 by chly-huc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include <stack>
#include "string"
#include "iostream"
#include "deque"

template<class T, class Container = std::deque<T> >
class MutantStack : public std::stack<T,Container>
{
    public:
        typedef typename Container::iterator iterator;
        typedef typename Container::const_iterator const_iterator;
        typedef typename Container::reverse_iterator reverse_iterator;
        typedef typename Container::const_reverse_iterator const_reverse_iterator;
        MutantStack()
        {
            
        }
        ~MutantStack()
        {
            
        }
        MutantStack& operator = (const MutantStack & rhs)
		{
			this->c = rhs.c;
			return *this;
		}
        iterator begin()
        {
            return this->c.begin();
        }
        const_iterator begin() const
        {
            return this->c.begin();
        }
        reverse_iterator rbegin()
        {
            return this->c.rbegin();
        }
        const_reverse_iterator rbegin() const
        {
            return this->c.rbegin();
        }
        iterator end()
        {
            return this->c.end();
        }
        const_iterator end() const
        {
            return this->c.end();
        }
        reverse_iterator rend()
        {
            return this->c.rend();
        }
        const_reverse_iterator rend() const
        {
            return this->c.rend();
        }
};

#endif