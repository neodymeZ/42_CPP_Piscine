/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 14:24:50 by larosale          #+#    #+#             */
/*   Updated: 2021/01/21 00:54:30 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// clang++ -Wall -Wextra -Werror -std=c++98 *.cpp

#include <iostream>
#include "AWeapon.hpp"
#include "Enemy.hpp"
#include "Character.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "Bfg.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "BattleRobot.hpp"

int main() {

    Character* me = new Character("me");

    std::cout << *me;

    Enemy* b = new RadScorpion();

    AWeapon* pr = new PlasmaRifle();
    AWeapon* pf = new PowerFist();

    me->equip(pr);
    std::cout << *me;
    me->equip(pf);

    me->attack(b);
    std::cout << *me;
    me->equip(pr);
    std::cout << *me;
    me->attack(b);
    std::cout << *me;
    me->attack(b);
    std::cout << *me;

    std::cout << "\n------------------------\n" << std::endl;

    Enemy *a = new SuperMutant();

    std::cout << *me;
    me->attack(a);
    std::cout << *me;
    std::cout << "Super Mutant now has: " << a->getHP() << " HP." << std::endl;
    me->equip(pf);
    me->attack(a);
    std::cout << *me;
    std::cout << "Super Mutant now has: " << a->getHP() << " HP." << std::endl;
    me->attack(a);
    std::cout << *me;
    std::cout << "Super Mutant now has: " << a->getHP() << " HP." << std::endl;
    me->attack(a);
    me->recoverAP();
    me->recoverAP();
    std::cout << *me;
    me->attack(a);
    std::cout << "Super Mutant now has: " << a->getHP() << " HP." << std::endl;
    me->equip(pr);
    std::cout << *me;
    me->attack(a);
    std::cout << *me;

    std::cout << "\n------------------------\n" << std::endl;

    Enemy *c = new BattleRobot();
    AWeapon* bf = new Bfg();

    me->recoverAP();
    me->recoverAP();
    me->recoverAP();
    me->recoverAP();
    std::cout << *me;
    me->attack(c);
    me->attack(c);
    me->attack(c);
    std::cout << "Battle Robot now has: " << c->getHP() << " HP." << std::endl;
    std::cout << *me;
    me->recoverAP();
    me->recoverAP();
    me->equip(bf);
    me->attack(c);

    return 0;
}
