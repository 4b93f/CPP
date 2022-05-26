/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shyrno <shyrno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 22:53:20 by shyrno            #+#    #+#             */
/*   Updated: 2021/10/25 00:43:41 by shyrno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void): Form("ShrubberyCreationForm", 137, 145), target("")
{
    std::cout << "ShrubberyCreationForm Default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): Form("ShrubberyCreationForm", 137, 145), target(target)
{
    std::cout << "ShrubberyCreationForm Paramectric constructor called"<< std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm & copy)
{  
    *this = copy;
    std::cout << "ShrubberyCreationForm Copy constructor called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) 
{
    std::cout << "ShrubberyCreationForm Destructor called" << std::endl;    
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm & rhs) 
{
    return *this;
}

void ShrubberyCreationForm::execute(const Bureaucrat & executor) const
{
    if (!this->getSign())
        throw NotSigned();
    if (executor.getGrade() > this->getExecGrade())
        throw GradeTooLowException();
    else
    {
        std::ofstream file(executor.getName() + "_shruberry");
        file << "       _-_" << std::endl;
        file << "    /~~   ~~\\" << std::endl;
        file << " /~~         ~~\\" << std::endl;
        file << "{               }" << std::endl;
        file << " \\  _-     -_  /" << std::endl;
        file << "   ~  \\\\ //  ~" << std::endl;
        file << "_- -   | | _- _" << std::endl;
        file << "  _ -  | |   -_" << std::endl;
        file << "      // \\\\" << std::endl;

        file.close();
    }   
}