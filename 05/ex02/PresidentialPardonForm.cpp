/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shyrno <shyrno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 01:06:08 by shyrno            #+#    #+#             */
/*   Updated: 2021/10/25 00:44:22 by shyrno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void): Form("PresidentialPardonForm", 5, 25), target("")
{
    std::cout << "PresidentialPardonForm Default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target): Form("PresidentialPardonForm", 137, 145), target(target)
{
    std::cout << "PresidentialPardonForm Paramectric constructor called"<< std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm & copy)
{  
    *this = copy;
    std::cout << "PresidentialPardonForm Copy constructor called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm(void) 
{
    std::cout << "PresidentialPardonForm Destructor called" << std::endl;    
}

PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm & rhs) 
{
    return *this;
}

void PresidentialPardonForm::execute(const Bureaucrat & executor) const
{
    if (!this->getSign())
        throw NotSigned();
    if (executor.getGrade() > this->getExecGrade())
        throw GradeTooLowException();
    else
        std::cout << executor.getName() << " has been forgiven by Zafod Beeblebrox." << std::endl;
}