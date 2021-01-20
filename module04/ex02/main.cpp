/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 22:02:46 by larosale          #+#    #+#             */
/*   Updated: 2021/01/21 01:07:55 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// clang++ -Wall -Wextra -Werror -std=c++98 *.cpp

#include <iostream>
#include "ISpaceMarine.hpp"
#include "ISquad.hpp"
#include "Squad.hpp"
#include "AssaultTerminator.hpp"
#include "TacticalMarine.hpp"

int main() {

    ISpaceMarine* bob = new TacticalMarine;
    ISpaceMarine* jim = new AssaultTerminator;

    ISquad* vlc = new Squad;
    vlc->push(bob);
    vlc->push(jim);

    for (int i = 0; i < vlc->getCount(); ++i) {
        ISpaceMarine* cur = vlc->getUnit(i);
        cur->battleCry();
        cur->rangedAttack();
        cur->meleeAttack();
    }

    delete vlc;

    std::cout << "\n---------------------------\n" << std::endl;

    jim = new TacticalMarine;
    bob = new AssaultTerminator;
    ISpaceMarine *john = jim->clone();
    ISpaceMarine *arny = bob->clone();

    Squad* squad = new Squad;
    squad->push(bob);
    squad->push(jim);

    std::cout << "\nTesting copying squad" << std::endl;
    Squad* assignedSquad = new Squad(*squad);
    std::cout << "\nTesting squad assignation" << std::endl;
    *assignedSquad = *squad;
    std::cout << "Size of assigned squad is: " << assignedSquad->getCount();
    std::cout << std::endl;

    std::cout << "\nOnce again testing copying squad" << std::endl;
    squad->push(john);
    squad->push(arny);

    ISquad* clonedSquad = new Squad(*squad);

    std::cout << "Size of squad is: " << squad->getCount() << std::endl;
    std::cout << "Size of cloned squad is: " << clonedSquad->getCount();
    std::cout << std::endl;
    std::cout << "Size of assigned squad is: " << assignedSquad->getCount();
    std::cout << std::endl << std::endl;

    std::cout << "Attacking with squad marines" << std::endl;
    for (int i = 0; i < clonedSquad->getCount(); ++i) {
        ISpaceMarine* cur = clonedSquad->getUnit(i);
        cur->battleCry();
        cur->rangedAttack();
        cur->meleeAttack();
    }

    std::cout << "\nDeleting squads" << std::endl;
    delete squad;
    delete clonedSquad;
    delete assignedSquad;

    return 0;
}
