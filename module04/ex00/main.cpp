/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 01:32:01 by larosale          #+#    #+#             */
/*   Updated: 2021/01/20 19:53:25 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// clang++ -Wall -Wextra -Werror -std=c++98 *.cpp

#include <iostream>
#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "Cow.hpp"
#include "Pig.hpp"

int main() {

    Sorcerer robert("Robert", "the Magnificent");
    Victim jim("Jimmy");
    Peon joe("Joe");

    std::cout << robert << jim << joe;
    robert.polymorph(jim);
    robert.polymorph(joe);

    std::cout << "\n--------------\n" << std::endl;

    Victim bob(jim);
    Victim john;
    john = jim;

    std::cout << bob << john;
    robert.polymorph(bob);
    robert.polymorph(john);

    std::cout << "\n--------------\n" << std::endl;

    Cow cow("Brovka");
    Pig pig("Khavrosha");

    std::cout << cow << pig;
    robert.polymorph(cow);
    robert.polymorph(pig);

    std::cout << "\n--------------\n" << std::endl;

    return 0;
}
