/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chly-huc <chly-huc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 01:26:05 by shyrno            #+#    #+#             */
/*   Updated: 2022/05/28 13:50:32 by chly-huc         ###   ########.fr       */
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
        void exec(const Form & rhs);
    private:
        const std::string name;
        int grade;
};

std::ostream & operator<<(std::ostream &o, Bureaucrat & rhs);

#endif