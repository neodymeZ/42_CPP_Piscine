/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 15:01:03 by larosale          #+#    #+#             */
/*   Updated: 2021/01/18 04:03:24 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap() : ClapTrap("NNJ4-TP", 120, 60, 60, 5, 0) {

    std::cout << this->_type << " " << this->_name;
    std::cout << " is constructed and says:\n'";
    std::cout << "Somebody's gonna die!'" << std::endl;
    return;
}

NinjaTrap::NinjaTrap(const std::string &name) :
    ClapTrap("NNJ4-TP", 120, 60, 60, 5, 0) {

    this->_name = name;

    std::cout << this->_type << " " << this->_name;
    std::cout << " is constructed and says:\n'";
    std::cout << "Hey everybody! Check out my package!'" << std::endl;
    return;
}

NinjaTrap::NinjaTrap(const NinjaTrap &src) :
    ClapTrap(src._type, src._maxEnergyPoints,
        src._maxHitPoints, src._meleeAttackDamage,
        src._rangedAttackDamage, src._armorDamageReduction) {

    *this = src;

    std::cout << this->_type << " " << this->_name;
    std::cout << " is constructed and says:\n'";
    std::cout << "Hey everybody! Check out my package!'" << std::endl;

    return;
}

NinjaTrap::~NinjaTrap() {

    std::cout << this->_type << " " << this->_name << " says:\n'";
    std::cout << "I'M DEAD I'M DEAD OHMYGOD I'M DEAD!' and is destroyed.";
    std::cout << std::endl;
    return;
}

NinjaTrap &NinjaTrap::operator=(const NinjaTrap &rhs) {

//    std::cout << "Assignment operator called" << std::endl;

    if (this != &rhs)
    {
        this->_name = rhs.getName();
        this->_level = rhs.getLevel();
        this->_hitPoints = rhs.getHP();
        this->_energyPoints = rhs.getEP();
    }

    return *this;
}

void NinjaTrap::rangedAttack(const std::string &target) const {

    std::cout << this->_type << " " << this->_name;
    std::cout << " throws shuriken at the " << target;
    std::cout << ", causing " << this->_rangedAttackDamage;
    std::cout << " points of damage!" << std::endl;
    return;
}

void NinjaTrap::meleeAttack(const std::string &target) const {

    std::cout << this->_type << " " << this->_name << " attacks " << target;
    std::cout << " with a shuko, causing " << this->_meleeAttackDamage;
    std::cout << " points of damage!" << std::endl;
    return;
}

void NinjaTrap::ninjaShoebox(const ClapTrap &clapTrap) {

    std::cout << this->_type << " " << this->_name << " says:\n'";
    std::cout << "Wow, you think I'm gonna fight with you, generic bastard? ";
    std::cout << "U'r " << clapTrap.getName() << ", aren't you?'" << std::endl;

    return;
}

void NinjaTrap::ninjaShoebox(const FragTrap &clapTrap) {

    std::cout << this->_type << " " << this->_name << " says:\n'";
    std::cout << "Hey, u're gonna become a real FRAG now, ";
    std::cout << clapTrap.getName() << "!'" << std::endl;

    this->meleeAttack(clapTrap.getName());

    return;
}

void NinjaTrap::ninjaShoebox(const ScavTrap &clapTrap) {

    std::cout << this->_type << " " << this->_name << " says:\n'";
    std::cout << "I have some tasty sushi for you, ";
    std::cout << clapTrap.getName() << "!'" << std::endl;

    this->rangedAttack(clapTrap.getName());

    return;
}

void NinjaTrap::ninjaShoebox(const NinjaTrap &clapTrap) {

    std::cout << this->_type << " " << this->_name << " says:\n'";
    std::cout << "Hey, we met before, didn't we? U're ";
    std::cout << clapTrap.getName() << ", right?'" << std::endl;

    return;
}
