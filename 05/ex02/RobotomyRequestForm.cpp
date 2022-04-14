/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shyrno <shyrno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 00:55:22 by shyrno            #+#    #+#             */
/*   Updated: 2021/10/25 00:44:06 by shyrno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void): Form("RobotomyRequestForm", 45, 72), target("")
{
    std::cout << "RobotomyRequestForm Default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): Form("RobotomyRequestForm", 45, 72), target(target)
{
    std::cout << "RobotomyRequestForm Paramectric constructor called"<< std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm & copy)
{  
    *this = copy;
    std::cout << "RobotomyRequestForm Copy constructor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm(void) 
{
    std::cout << "RobotomyRequestForm Destructor called" << std::endl;    
}

RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm & rhs) 
{
    return *this;
}

void RobotomyRequestForm::execute(const Bureaucrat & executor) const
{
    if (!this->getSign())
        throw NotSigned();
    if (executor.getGrade() > this->getExecGrade())
        throw GradeTooLowException();
    else
    {
        srand (time(NULL));
        if (rand() % 2 == 1)
            std::cout << "pffffft pffft ! " << executor.getName() << " has been robotom'd" << std::endl;
        else
            std::cout << executor.getName() << " dodged the robotomy." << std::endl;
    }   
}