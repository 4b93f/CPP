/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chly-huc <chly-huc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 17:37:39 by chly-huc          #+#    #+#             */
/*   Updated: 2022/05/31 14:11:11 by chly-huc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base()
{

}

Base * Base::generate()
{
    Base *ret = NULL; 
    srand(time(NULL));
    int n = rand() % 3 + 1;
    if (n == 1)
    {
        std::cout << "Generate A class" << std::endl;
        ret = new A();
    }
    if (n == 2)
    {
        std::cout << "Generate B class" << std::endl;
        ret = new B();
    }
    if (n == 3)
    {
        std::cout << "Generate C class" << std::endl;
        ret = new C();
    }
    return ret;
}

void Base::identify(Base *p)
{
    A* var_a = dynamic_cast<A*>(p);
    B* var_b = dynamic_cast<B*>(p);
    C* var_c = dynamic_cast<C*>(p);

    if (var_a)
        std::cout << "ITS A !" << std::endl;
    else if (var_b)
        std::cout << "ITS B !" << std::endl;
    else if (var_c)
        std::cout << "ITS C !" << std::endl;

}

void Base::identify(Base &p)
{
    try
    {
        A& var_a = dynamic_cast<A&>(p);
        std::cout << "ITS A !" << std::endl;
        return;
    }
    catch(const std::exception & e)
    {
        (void)e;
    }
    try
    {
        B& var_b = dynamic_cast<B&>(p);
        std::cout << "ITS B !" << std::endl;
        return;
        
    }
    catch(const std::exception & e)
    {
        (void)e;
    }
    try
    {
        C& var_c = dynamic_cast<C&>(p);
        std::cout << "ITS C !" << std::endl;
        return;
    }
    catch(const std::exception & e)
    {
        (void)e;
    } 
}