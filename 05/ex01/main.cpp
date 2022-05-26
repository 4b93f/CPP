/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shyrno <shyrno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 01:52:50 by shyrno            #+#    #+#             */
/*   Updated: 2021/10/24 22:37:20 by shyrno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main (void)
{
    Form easy;
    Form average("Easy", 100, 100);
    Form hard("Hard", 5, 5);

    Bureaucrat bad_worker("bad_worker", 140);
    Bureaucrat good_worker("good_worker", 1);
    Bureaucrat average_worker("average_worker", 100);

    std::cout << "--Test easy and grade is sufficient--" << std::endl << std::endl;
    try
    { 
        std::cout << "easy needs grade " << easy.getExecGrade() << " to be executed and grade " << easy.getSignGrade() << " to be signed (at least)." << std::endl;
        std::cout << "good worker sign grade = " << good_worker.getGrade() << std::endl;
        std::cout << "Signed state of easy before : " << easy.getSign() << std::endl;
        easy.beSigned(good_worker);
        std::cout << "Signed state of easy after : " << easy.getSign() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << std::endl << "--Test hard and grade is too low--" << std::endl << std::endl;
    try
    { 
        std::cout << "hard needs grade " << hard.getExecGrade() << " to be executed and grade " << hard.getSignGrade() << " to be signed (at least)." << std::endl;
        std::cout << "bad worker sign grade = " << bad_worker.getGrade() << std::endl;
        std::cout << "Signed state of hard is : " << hard.getSign() << std::endl;
        hard.beSigned(bad_worker);
        std::cout << "Signed state of hard is : " << hard.getSign() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << std::endl << "--Test average and grade is equal--" << std::endl << std::endl;
    try
    { 
        std::cout << "average needs grade " << average.getExecGrade() << " to be executed and grade " << average.getSignGrade() << " to be signed (at least)." << std::endl;
        std::cout << "average worker sign grade = " << average_worker.getGrade() << std::endl;
        std::cout << "Signed state of average is : " << average.getSign() << std::endl;
        average.beSigned(average_worker);
        std::cout << "Signed state of average is : " << average.getSign() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << std::endl << "--Other test--" << std::endl << std::endl;
    Bureaucrat test("Michel", 10);
    Form possible("possible", 10, 10);
    Form impossible("impossible", 9, 9);
    
    test.signForm(possible);
    test.signForm(impossible);
}