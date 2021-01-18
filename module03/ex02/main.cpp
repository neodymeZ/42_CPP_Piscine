/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 18:33:44 by larosale          #+#    #+#             */
/*   Updated: 2021/01/18 00:41:02 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// clang++ ClapTrap.cpp FragTrap.cpp ScavTrap.cpp main.cpp -Wall -Wextra -Werror -std=c++98

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    std::srand(std::time(0));

    FragTrap robot("Jack");

    std::cout << "\nFR4G - TESTING ATTACKS\n" << std::endl;

    robot.rangedAttack("dog");
    robot.meleeAttack("R2D2");

    std::cout << "\nFR4G - TESTING TAKING DAMAGE AND REPAIRING\n" << std::endl;

    robot.takeDamage(1);
    robot.takeDamage(23);
    robot.takeDamage(200);

    robot.beRepaired(30);
    robot.beRepaired(200);

    std::cout << "\nFR4G - TESTING VAULTHUNTER.EXE\n" << std::endl;

    robot.vaulthunter_dot_exe("Punkbot");
    robot.vaulthunter_dot_exe("Blightbot");
    robot.vaulthunter_dot_exe("Mechromagician");
    robot.vaulthunter_dot_exe("Miniontrap");
    robot.vaulthunter_dot_exe("Medbot");
    std::cout << std::endl;

    ScavTrap robot2("Bob");

    std::cout << "\nSC4V - TESTING ATTACKS\n" << std::endl;

    robot2.rangedAttack("cat");
    robot2.meleeAttack("C-3PO");

    std::cout << "\nSC4V - TESTING TAKING DAMAGE AND REPAIRING\n" << std::endl;

    robot2.takeDamage(2);
    robot2.takeDamage(54);
    robot2.takeDamage(150);

    robot2.beRepaired(23);
    robot2.beRepaired(170);

    std::cout << "\nSC4V - TESTING CHALLENGENEWCOMER\n" << std::endl;

    robot2.challengeNewcomer();
    robot2.challengeNewcomer();
    robot2.challengeNewcomer();
    robot2.challengeNewcomer();
    robot2.challengeNewcomer();
    std::cout << std::endl;

    return 0;
}
