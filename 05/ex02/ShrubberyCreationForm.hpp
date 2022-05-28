/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chly-huc <chly-huc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 22:48:56 by shyrno            #+#    #+#             */
/*   Updated: 2022/05/28 14:07:53 by chly-huc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP
# include "iostream"
# include "string"
# include "Bureaucrat.hpp"
# include "Form.hpp"
# include "fstream"

class ShrubberyCreationForm : public Form
{
    public:
        ShrubberyCreationForm(void);
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm(ShrubberyCreationForm & copy);
        ~ShrubberyCreationForm(void);
        ShrubberyCreationForm & operator=(const ShrubberyCreationForm & rhs);
        virtual void execute(const Bureaucrat & executor) const;
    private:
        std::string target;
};

#endif