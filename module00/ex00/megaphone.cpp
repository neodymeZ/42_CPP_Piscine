/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 20:18:21 by larosale          #+#    #+#             */
/*   Updated: 2020/12/22 02:45:35 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void strToUpper(char *str)
{
    while (*str) {
        *str = toupper(*str);
        str++;
    }
    return;
}

int main(int argc, char **argv)
{
    if (argc == 1) {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    }
    else {
        while (*++argv) {
            strToUpper(*argv);
            std::cout << *argv;
        }
        std::cout << std::endl;
    }
    return 0;
}
