/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shyrno <shyrno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 22:48:56 by shyrno            #+#    #+#             */
/*   Updated: 2021/10/25 00:43:52 by shyrno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFROM_HPP
# define SHRUBBERYCREATIONFORM_HPP
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