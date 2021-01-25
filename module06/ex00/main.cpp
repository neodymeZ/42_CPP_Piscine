/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 00:01:06 by larosale          #+#    #+#             */
/*   Updated: 2021/01/25 14:04:08 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Convert.hpp"

int main(int argc, char **argv) {

    if (argc == 2)
    {
        Convert c(argv[1]);

        try
        {
            c.makeConversion();
        }
        catch (std::exception &e)
        {
            std::cerr << "Error: " << e.what() << std::endl;
            return 1;
        }
    }
    else
    {
        std::cerr << "Error: invalid number of arguments" << std::endl;
        return 1;
    }

    return 0;
}
