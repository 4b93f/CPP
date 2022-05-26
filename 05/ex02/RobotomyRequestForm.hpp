/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shyrno <shyrno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 00:55:55 by shyrno            #+#    #+#             */
/*   Updated: 2021/10/25 00:43:58 by shyrno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

class RobotomyRequestForm : public Form
{
    public:
        RobotomyRequestForm(void);
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm(RobotomyRequestForm & copy);
        ~RobotomyRequestForm(void);
        RobotomyRequestForm & operator=(const RobotomyRequestForm & rhs);
        virtual void execute(const Bureaucrat & executor) const;
    private:
        std::string target;
};
