/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chly-huc <chly-huc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 17:31:52 by chly-huc          #+#    #+#             */
/*   Updated: 2022/05/31 14:11:04 by chly-huc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main()
{
    Base p;
    Base *ret;

    ret = p.generate();
    p.identify(ret);
    p.identify(*ret);
    delete ret;
    return 0;
}