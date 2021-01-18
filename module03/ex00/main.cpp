/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 18:33:44 by larosale          #+#    #+#             */
/*   Updated: 2021/01/17 03:16:19 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// clang++ FragTrap.cpp main.cpp -Wall -Wextra -Werror -std=c++98

#include "FragTrap.hpp"

int main()
{
    FragTrap robot("Jack");
    std::srand(std::time(0));

    std::cout << "\nTESTING ATTACKS\n" << std::endl;

    robot.rangedAttack("dog");
    robot.meleeAttack("R2D2");

    std::cout << "\nTESTING TAKING DAMAGE AND REPAIRING\n" << std::endl;

    robot.takeDamage(1);
    robot.takeDamage(23);
    robot.takeDamage(200);

    robot.beRepaired(30);
    robot.beRepaired(200);

    std::cout << "\nTESTING VAULTHUNTER.EXE\n" << std::endl;

    robot.vaulthunter_dot_exe("Punkbot");
    robot.vaulthunter_dot_exe("Blightbot");
    robot.vaulthunter_dot_exe("Mechromagician");
    robot.vaulthunter_dot_exe("Miniontrap");
    robot.vaulthunter_dot_exe("Medbot");
    std::cout << std::endl;

    return 0;
}
