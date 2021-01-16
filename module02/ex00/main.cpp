/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 21:47:39 by larosale          #+#    #+#             */
/*   Updated: 2021/01/15 21:51:27 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// clang++ main.cpp Fixed.cpp -Wall -Wextra -Werror -std=c++98

#include <iostream>
#include "Fixed.hpp"

int main()
{
    Fixed a;
    Fixed b(a);
    Fixed c;

    c = b;
    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;

    return 0;
}
