/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shyrno <shyrno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 17:27:08 by shyrno            #+#    #+#             */
/*   Updated: 2021/10/25 00:44:59 by shyrno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void): name("Blank"), execGrade(150), signGrade(150)
{
    bool sign = false;
    std::cout << "Form Default constructor called" << std::endl;
}

Form::Form(std::string name, int execGrade, int signGrade): name(name), execGrade(execGrade), signGrade(signGrade)
{
    if (execGrade > 150)
        throw GradeTooHighException();
    if (execGrade < 1)
        throw GradeTooLowException();
    if (signGrade > 150)
        throw GradeTooHighException();
    if (signGrade < 1)
        throw GradeTooLowException();
    this->sign = false;
    std::cout << "Form Paramectric constructor called"<< std::endl;
}

Form::Form(Form & copy): name("Blank"), execGrade(150), signGrade(150), sign(false)
{
    
    *this = copy;
    std::cout << "Form Copy constructor called" << std::endl;
}

Form::~Form(void) 
{
    std::cout << this->name << " ";
    std::cout << "Form Destructor called" << std::endl;    
}

const char* Form::GradeTooLowException::what() const throw()
{
   return ("Exec Grade too low !\n"); 
}

const char* Form::GradeTooHighException::what() const throw()
{
   return ("Exec Grade too high !\n"); 
}

const char* Form::SignTooLowException::what() const throw()
{
   return ("Sign Grade too low !\n"); 
}

const char* Form::SignTooHighException::what() const throw()
{
   return ("Sign Grade too high !\n"); 
}

const char* Form::NotSigned::what() const throw()
{
   return ("not signed, try to sign it first\n"); 
}


int Form::getExecGrade(void) const
{
    return this->execGrade;
}

int Form::getSignGrade(void) const
{
    return this->signGrade;
}

bool Form::getSign(void) const
{
    if (this->sign == true)
        return true;
    return false;
}
std::string Form::getFormName(void) const
{
    return this->name;
}

Form & Form::operator=(const Form & rhs) 
{
    return *this;
}

std::ostream & operator<<(std::ostream &o, Form & rhs)
{
    
    o << std::endl << rhs.getFormName() << std::endl;
    o << "Exec Grade : " << rhs.getExecGrade() << std::endl;
    o << "Sign Grade : " << rhs.getExecGrade() << std::endl;
    o << "Signed ? : " << rhs.getSign() << std::endl; 
    return o;
}

void Form::beSigned(const Bureaucrat & rhs)
{
    if (this->sign)
        std::cout << this->name <<" Already sign" << std::endl;
    else if (rhs.getGrade() <= this->signGrade)
    {
        std::cout << this->name << " signs " << this->getFormName() << std::endl;
        this->sign = true;
    }
    else
        throw GradeTooLowException();
}