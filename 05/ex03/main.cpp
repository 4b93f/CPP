/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chly-huc <chly-huc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 01:52:50 by shyrno            #+#    #+#             */
/*   Updated: 2022/05/28 17:20:20 by chly-huc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main (void)
{
    RobotomyRequestForm hey;
    ShrubberyCreationForm shrub;
    PresidentialPardonForm President;
    Bureaucrat human("Charli", 100);
    Bureaucrat god ("me", 1);

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
    std::cout << "Inter TEST" << std::endl;
    Intern moi;

    Form *rrf;

    rrf = moi.makeForm("Shrubbery request", "flo");
    
    std::cout << *rrf << std::endl;
    god.exec(*rrf);
    god.signForm(*rrf);
    god.exec(*rrf);
    delete rrf;
    // std::cout << std::endl << "Test four" << std::endl << std::endl;

    // Bureaucrat human_four("you", 138);
    // Bureaucrat human_four_bis("no_you", 10);

    // human_four.signForm(shrub);
    // human_four.exec(shrub);
    // human_four_bis.exec(shrub);
    // std::cout << std::endl << "Test five" << std::endl << std::endl;

    // Bureaucrat human_five("five", 2);

    // human_five.signForm(President);
    // human_five.exec(President);
}