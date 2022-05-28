/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chly-huc <chly-huc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 13:48:25 by chly-huc          #+#    #+#             */
/*   Updated: 2022/05/28 15:17:58 by chly-huc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern()
{
    std::cout << "Intern constructor called" << std::endl;
}

Intern::~Intern()
{
    std::cout << "Intern destructor called" << std::endl;
}

Intern & Intern::operator=(const Intern & rhs) 
{
    return *this;
}

Form * Intern::makeForm(const std::string FormName, const std::string who) const
{
    if (FormName.empty())
        throw NoFormName();
    Form* (Intern::*fct[3])(std::string const) const = {&Intern::newPresidential, &Intern::newRobotomy, &Intern::newShrubbery};

    std::string tab[3] = {"PresidentialPardon request", "Robotomy request", "Shrubbery request"};
    for (int i = 0; i < 3;i++)
    {
        if (!tab[i].compare(FormName))
            return(this->*fct[i])(who);
    }
    throw NoForm();
    
}

Form * Intern::newPresidential(const std::string target) const
{
    std::cout << "Intern creates PresidentialPardonForm" << std::endl; 
    return new PresidentialPardonForm(target);
}

Form * Intern::newRobotomy(const std::string target) const
{
    std::cout << "Intern creates RobotomyForm" << std::endl; 
    return new RobotomyRequestForm(target);
}

Form * Intern::newShrubbery(const std::string target) const
{
    return new ShrubberyCreationForm(target);
}

const char* Intern::NoForm::what() const throw()
{
    return("Error : A valid form name is needed\n");
}

const char* Intern::NoFormName::what() const throw()
{
    return("Error : Please give a Form name to search\n");
}