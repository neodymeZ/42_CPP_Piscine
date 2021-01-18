/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 18:33:44 by larosale          #+#    #+#             */
/*   Updated: 2021/01/18 04:04:24 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// clang++ ClapTrap.cpp FragTrap.cpp ScavTrap.cpp NinjaTrap.cpp SuperTrap.cpp main.cpp -Wall -Wextra -Werror -std=c++98

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

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

    NinjaTrap robot3("Hiroto");
    NinjaTrap robot4("Sakura");
    ClapTrap noname;

    std::cout << "\nNNJ4 - TESTING ATTACKS\n" << std::endl;

    robot3.rangedAttack("rat");
    robot3.meleeAttack("bad guy");

    std::cout << "\nNNJ4 - TESTING TAKING DAMAGE AND REPAIRING\n" << std::endl;

    robot3.takeDamage(4);
    robot3.takeDamage(52);
    robot3.takeDamage(310);

    robot3.beRepaired(43);
    robot3.beRepaired(140);

    std::cout << "\nNNJ4 - TESTING NINJA SHOEBOX\n" << std::endl;

    robot3.ninjaShoebox(noname);
    robot3.ninjaShoebox(robot);
    robot3.ninjaShoebox(robot2);
    robot3.ninjaShoebox(robot4);

    std::cout << std::endl;

    SuperTrap robot5("Clark");

    std::cout << "\nSP3R - TESTING ATTACKS\n" << std::endl;

    robot5.rangedAttack("crocodile");
    robot5.meleeAttack("bad guy");

    std::cout << "\nSP3R - TESTING TAKING DAMAGE AND REPAIRING\n" << std::endl;

    robot5.takeDamage(4);
    robot5.takeDamage(50);
    robot5.takeDamage(300);

    robot5.beRepaired(33);
    robot5.beRepaired(190);

    std::cout << "\nSP3R - TESTING VAULTHUNTER.EXE\n" << std::endl;

    robot5.vaulthunter_dot_exe("Punkbot");
    robot5.vaulthunter_dot_exe("Blightbot");
    robot5.vaulthunter_dot_exe("Mechromagician");
    robot5.vaulthunter_dot_exe("Miniontrap");
    robot5.vaulthunter_dot_exe("Medbot");

    std::cout << "\nSP3R - TESTING NINJA SHOEBOX\n" << std::endl;

    robot5.ninjaShoebox(noname);
    robot5.ninjaShoebox(robot);
    robot5.ninjaShoebox(robot2);
    robot5.ninjaShoebox(robot4);

    std::cout << std::endl;

    return 0;
}
