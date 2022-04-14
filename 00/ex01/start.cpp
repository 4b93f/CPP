/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shyrno <shyrno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 03:40:29 by shyrno            #+#    #+#             */
/*   Updated: 2021/10/24 03:46:39 by shyrno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "contact.hpp"

static void stop()
{
    std::cout << "Bye, tchao, au revoir" << std::endl;
    exit(0);
}

int start_phonebook()
{
    int ret;

    std::cout << "Welcome to my Phonebook.\nYou can : " << std::endl;
    std::cout << "- ADD \n- SEARCH \n- EXIT \n" << std::endl;
    std::string cmd;
    getline(std::cin, cmd);
    if (cmd == "ADD")
       ret = 1;
    else if (cmd == "SEARCH")
       ret = 2;
    else if (cmd == "EXIT")
       ret = 3;
	else
		ret = 0;
    return (ret);
}

int main()
{
    Phonebook phone;
    int i = -1;
    int j = -1;
    int start = 0;

    system("clear");
    while(1)
    {
        if (start == 0)
            start = start_phonebook();
        if (start == 1)
        {
            if (((i % 7) == 0) && i != 0)
                i = -1;
            phone.add(++i);
            j++;
        }
        else if (start == 2)
            phone.search(j);
        else if (start == 3)
            stop();
        else
            system("clear");
        start = 0;
    }
    return 1;
}