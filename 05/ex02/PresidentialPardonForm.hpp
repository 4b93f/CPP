/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shyrno <shyrno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 01:06:42 by shyrno            #+#    #+#             */
/*   Updated: 2021/10/25 00:44:17 by shyrno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"
# include "Form.hpp"

class PresidentialPardonForm : public Form
{
    public:
        PresidentialPardonForm(void);
        PresidentialPardonForm(std::string target);
        PresidentialPardonForm(PresidentialPardonForm & copy);
        ~PresidentialPardonForm(void);
        PresidentialPardonForm & operator=(const PresidentialPardonForm & rhs);
        virtual void execute(const Bureaucrat & executor) const;
    private:
        std::string target;
};