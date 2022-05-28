/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chly-huc <chly-huc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 03:34:37 by shyrno            #+#    #+#             */
/*   Updated: 2022/05/28 17:29:49 by chly-huc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

uintptr_t serialize(Data *ptr)
{
    uintptr_t raw;

    raw = reinterpret_cast<uintptr_t>(ptr);
    return raw;
}

Data *deserialize(uintptr_t raw)
{
    Data *ret;
    ret = reinterpret_cast<Data *>(raw);
    return (ret);
}

int main()
{
    Data *op = new Data;
    Data *not_op = new Data;
    uintptr_t raw;

    op->name = "Issou";
    op->PIN = 6969;
    not_op->name = "Blank";
    not_op->PIN = 0000;

    std::cout << "<BEFORE SERIALIZE>" << std::endl << std::endl;
    std::cout << "-- OP -- " << std::endl;
    std::cout << "PIN : " << op->PIN << std::endl;
    std::cout << "name : " << op->name << std::endl;
    std::cout << "Address : " << op << std::endl << std::endl;
    std::cout << "-- NotOP -- " << std::endl;
    std::cout << "PIN : " << not_op->PIN << std::endl;
    std::cout << "name : " << not_op->name << std::endl;
    std::cout << "Address : " << not_op << std::endl << std::endl;
    raw = serialize(op);
    delete not_op;
    not_op = deserialize(raw);
    std::cout << "<AFTER SERIALIZE>" << std::endl << std::endl;
    std::cout << "-- NotOP -- " << std::endl;
    std::cout << "PIN : " << not_op->PIN << std::endl;
    std::cout << "name : " << not_op->name << std::endl;
    std::cout << "Address : " << not_op << std::endl << std::endl;

    delete op;
    return 0;
}