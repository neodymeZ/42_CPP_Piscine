/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 00:27:39 by larosale          #+#    #+#             */
/*   Updated: 2021/01/09 00:27:44 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "StringReplace.hpp"

int main(int argc, char **argv)
{
    if (argc == 4)
    {
        StringReplace replace(argv[1], argv[2], argv[3]);
        bool res = replace.doReplacement();
        if (!res)
            return 1;
    }
    else
    {
        std::cerr << "Error: invalid arguments" << std::endl;
        return 1;
    }
    return 0;
}
