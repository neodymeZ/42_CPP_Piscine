/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 18:17:57 by larosale          #+#    #+#             */
/*   Updated: 2021/01/21 01:52:15 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// clang++ -Wall -Wextra -Werror -std=c++98 *.cpp

#include <iostream>
#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "Fire.hpp"
#include "Air.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

int main() {

    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    ICharacter* me = new Character("me");

    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);

    ICharacter* bob = new Character("bob");

    me->use(0, *bob);
    me->use(1, *bob);

    delete bob;
    delete me;
    delete src;

    std::cout << "\n------------------------------\n" << std::endl;

    IMateriaSource* src2 = new MateriaSource();
    src2->learnMateria(new Ice());
    src2->learnMateria(new Cure());
    src2->learnMateria(new Fire());
    src2->learnMateria(new Air());

    ICharacter* me2 = new Character("Sorcerer");

    AMateria* tmp2;
    tmp2 = src->createMateria("ice");
    me2->equip(tmp2);
    tmp2 = src->createMateria("cure");
    me2->equip(tmp2);
    tmp2 = src->createMateria("air");
    me2->equip(tmp2);
    tmp2 = src->createMateria("fire");
    me2->equip(tmp2);

    ICharacter* me3 = new Character(*dynamic_cast<Character*>(me2));
    Character* me4 = new Character("Wizard");
    tmp2 = src->createMateria("ice");
    me4->equip(tmp2);
    *me4 = *dynamic_cast<Character*>(me2);

    ICharacter* troll = new Character("troll");
    ICharacter* basilisk = new Character("basilisk");
    ICharacter* dragon = new Character("dragon");
    ICharacter* bfriend = new Character("friend");

    std::cout << me2->getName() << ": ";
    me2->use(0, *dragon);
    std::cout << me2->getName() << ": ";
    me2->use(1, *bfriend);
    std::cout << me3->getName() << ": ";
    me3->use(2, *basilisk);
    std::cout << me4->getName() << ": ";
    me4->use(3, *troll);

    delete src2;
    delete me2;
    delete me3;
    delete me4;
    delete troll;
    delete basilisk;
    delete dragon;
    delete bfriend;

    return 0;
}
