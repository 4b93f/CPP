/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chly-huc <chly-huc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 13:50:46 by chly-huc          #+#    #+#             */
/*   Updated: 2022/05/28 15:09:11 by chly-huc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP
# include "iostream"
# include "stdexcept"
# include "Form.hpp"

class Intern
{
    public :
        Intern();
        Intern(const Intern & rhs);
        Form *makeForm(const std::string FormName, const std::string who) const;
        Form *newPresidential(const std::string target) const;
        Form *newRobotomy(const std::string target) const;
        Form *newShrubbery(const std::string target) const;
        Intern & operator=(Intern const & target);
        ~Intern();
        class NoFormName : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
        class NoForm : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
    private:
};


#endif
