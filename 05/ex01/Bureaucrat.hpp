/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shyrno <shyrno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 01:26:05 by shyrno            #+#    #+#             */
/*   Updated: 2021/10/24 22:34:37 by shyrno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include "iostream"
# include "stdexcept"
# include "Form.hpp"

class Form;

class Bureaucrat
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
        Bureaucrat(void);
        Bureaucrat(std::string name, int grade);
        Bureaucrat(Bureaucrat & copy);
        ~Bureaucrat(void);
        Bureaucrat & operator=(const Bureaucrat & rhs);
        std::string getName(void) const;
        int getGrade(void) const;
        void incGrade(Bureaucrat & rhs);
        void decGrade(Bureaucrat & rhs);
        void signForm(Form & rhs) const;
    private:
        const std::string name;
        int grade;
};

std::ostream & operator<<(std::ostream &o, Bureaucrat & rhs);

#endif