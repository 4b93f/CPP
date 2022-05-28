/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shyrno <shyrno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 01:30:03 by shyrno            #+#    #+#             */
/*   Updated: 2021/10/25 00:39:56 by shyrno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(void): name("Blank")
{
    this->grade = 150;
    std::cout << "Bureaucrat Default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade): name(name)
{
    if (grade > 150)
        throw(GradeTooLowException());
    if (grade < 1)
        throw(GradeTooHighException());
    this->grade = grade;
    std::cout << "Bureaucrat Paramectric constructor called"<< std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat & copy) 
{  
    *this = copy;
    std::cout << "Bureaucrat Copy constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat(void) 
{
    std::cout << this->name << " ";
    std::cout << "Bureaucrat Destructor called" << std::endl;    
}

std::string Bureaucrat::getName(void) const
{
    return this->name;
}

int Bureaucrat::getGrade(void) const
{
    return this->grade;
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
   return ("Grade too low !\n"); 
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
   return ("Grade too high !\n"); 
}


void Bureaucrat::incGrade(Bureaucrat & rhs)
{
    if (this->grade <= 150)
        throw GradeTooHighException();
    this->grade++;
}

void Bureaucrat::decGrade(Bureaucrat & rhs)
{
    if (this->grade >= 1)
        throw GradeTooLowException();
    this->grade--;
}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat & rhs) 
{
    return *this;
}

std::ostream & operator<<(std::ostream &o, Bureaucrat & rhs)
{
    o << rhs.getName() << ", Bureaucrat grade " << rhs.getGrade() << std::endl;
    return o;
}

void Bureaucrat::signForm(Form & sign) const
{
    try
    {
        sign.beSigned(*this);
    }
    catch(const std::exception& e)
    {
        std::cerr << "Cannot sign : " << e.what() << std::endl;
    }
    
}

void Bureaucrat::exec(const Form & rhs)
{
    try
    {
        std::cout << this->name << " is executing " << rhs.getFormName() << std::endl;
        rhs.execute(*this);
    }
    catch(const std::exception& e)
    {
        std::cerr << "Cannot execut : " << e.what() << std::endl;
    }
}