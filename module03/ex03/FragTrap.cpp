/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 15:01:03 by larosale          #+#    #+#             */
/*   Updated: 2021/01/19 00:35:50 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("FR4G-TP", 100, 100, 30, 20, 5) {

    std::cout << this->_type << " " << this->_name;
    std::cout << " is constructed and says:\n'";
    std::cout << "Let me teach you the ways of magic!'" << std::endl;
    return;
}

FragTrap::FragTrap(const std::string &name) :
    ClapTrap("FR4G-TP", 100, 100, 30, 20, 5) {

    this->_name = name;

    std::cout << this->_type << " " << this->_name;
    std::cout << " is constructed and says:\n'";
    std::cout << "Yessiree! This whole place would completely fall apart ";
    std::cout << "without old " << name << " keeping things humming along!'";
    std::cout << std::endl;
    return;
}

FragTrap::FragTrap(const FragTrap &src) {

    *this = src;

    std::cout << this->_type << " " << this->_name;
    std::cout << " is constructed and says:\n'";
    std::cout << "Yessiree! This whole place would completely fall apart ";
    std::cout << "without old " << this->_name;
    std::cout << " keeping things humming along!'" << std::endl;

    return;
}

FragTrap::~FragTrap() {

    std::cout << this->_type << " " << this->_name << " says:\n'";
    std::cout << "Oh, quit falling to pieces' and is destroyed." << std::endl;
    return;
}

FragTrap &FragTrap::operator=(const FragTrap &rhs) {

//    std::cout << "Assignment operator called" << std::endl;

    if (this != &rhs)
    {
        this->_hitPoints = rhs._hitPoints;
        this->_maxHitPoints = rhs._maxHitPoints;
        this->_energyPoints = rhs._energyPoints;
        this->_maxEnergyPoints = rhs._maxEnergyPoints;
        this->_level = rhs._level;
        this->_name = rhs._name;
        this->_meleeAttackDamage = rhs._meleeAttackDamage;
        this->_rangedAttackDamage = rhs._rangedAttackDamage;
        this->_armorDamageReduction = rhs._armorDamageReduction;
    }

    return *this;
}

void FragTrap::rangedAttack(const std::string &target) const {

    std::cout << this->_type << " " << this->_name << " shoots at " << target;
    std::cout << " with a rifle, causing " << this->_rangedAttackDamage;
    std::cout << " points of damage!" << std::endl;
    return;
}

void FragTrap::meleeAttack(const std::string &target) const {

    std::cout << this->_type << " " << this->_name << " attacks " << target;
    std::cout << " with a sword, causing " << this->_meleeAttackDamage;
    std::cout << " points of damage!" << std::endl;
    return;
}

void FragTrap::vaulthunter_dot_exe(const std::string &target) {

    const std::string attacks[5] = {
        "Recompiling my combat code!",
        "Defragmenting!",
        "Let's get this party started!",
        "You can't just program this level of excitement!",
        "Glitchy weirdness is term of endearment, right?"
    };

    if (this->_energyPoints >= 25 && this->_maxEnergyPoints && this->_level)
    {
        std::cout << this->_type << " " << this->_name;
        std::cout << " is activating VaultHunter.EXE and attacks ";
        std::cout << target << " saying:\n'";
        std::cout << attacks[std::rand() % 5] << "'" << std::endl;
        this->_energyPoints -= 25;
    }
    else
    {
        std::cout << this->_type << " " << this->_name;
        std::cout << " has insufficient energy points to activate";
        std::cout << " VaultHunter.EXE :(" << std::endl;
    }

    return;
}
