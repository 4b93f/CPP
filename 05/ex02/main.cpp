/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shyrno <shyrno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 01:52:50 by shyrno            #+#    #+#             */
/*   Updated: 2021/10/25 00:42:21 by shyrno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main (void)
{
    RobotomyRequestForm hey;
    Bureaucrat human("Charli", 100);

    human.signForm(hey);
    human.exec(hey);
    std::cout << std::endl << "Test two" << std::endl << std::endl;

    Bureaucrat human_two("Brudda", 46);

    human_two.exec(hey);
    human_two.signForm(hey);
    human_two.exec(hey);

    std::cout << std::endl << "Test three" << std::endl << std::endl;

    Bureaucrat human_three("paul", 45);

    human_three.signForm(hey);
    human_three.exec(hey);
}