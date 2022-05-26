/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shyrno <shyrno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 02:20:03 by shyrno            #+#    #+#             */
/*   Updated: 2021/10/24 22:35:07 by shyrno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include "iostream"
# include "stdexcept"
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    public:
        class GradeTooLowException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
        class GradeTooHighException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
        class SignTooLowException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
        class SignTooHighException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
        Form(void);
        Form(std::string name, int execGrade, int signGrade);
        Form(Form & copy);
        ~Form(void);
        Form & operator=(const Form & rhs);
        int getExecGrade(void) const;
        int getSignGrade(void) const;
        std::string getFormName(void) const;
        bool getSign(void) const;
        void beSigned(const Bureaucrat & rhs);
    private:
        const std::string name;
        const int execGrade;
        const int signGrade;
        bool sign;
};

std::ostream & operator<<(std::ostream &o, Form & rhs);

#endif