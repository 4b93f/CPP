/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shyrno <shyrno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 20:36:08 by shyrno            #+#    #+#             */
/*   Updated: 2022/04/13 05:45:49 by shyrno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

std::string engine(std::string concat, std::string s1, std::string s2)
{
    std::string line;
    int pos = 0;
    char s;

    if (!concat.find(s1))
        return s1;
    while (!concat.empty())
    {
        s = concat[0];
        pos = concat.find(s1);
        
        if (pos == 0)
        {
            line += s2;
            concat = concat.substr(s1.size(), (concat.size() -1));
        }
        else
        {
            line += s;
            concat = concat.substr(1, (concat.size() - 1));
        }
    }
    return line;
}

void ft_replace(std::string filename, std::string s1, std::string s2)
{
    char a;
    std::string concat;
    std::ifstream file(const_cast<char*>(filename.c_str()));
    filename += ".replace";
    char *copy_name = const_cast<char*>(filename.c_str());

    if (!file.is_open())
    {
        std::cout << "Error, can't open the file" << std::endl;
		return ;
    }
    std::ofstream copy(copy_name);
    file.get(a);
    while(!file.eof())
    {
        concat += a;
        file.get(a);
    }
    if (s1.empty())
        copy << concat;
    copy << engine(concat, s1, s2) << std::endl;
    copy.close();
    file.close();
    
}

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cout << "Wrong numbers of argument" << std::endl;
        return 1;
    }
    ft_replace(argv[1], argv[2], argv[3]);
    return (0);
}