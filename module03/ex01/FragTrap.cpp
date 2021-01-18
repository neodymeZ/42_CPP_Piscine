/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 15:01:03 by larosale          #+#    #+#             */
/*   Updated: 2021/01/18 00:07:34 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() :
    _hitPoints(100),
    _maxHitPoints(100),
    _energyPoints(100),
    _maxEnergyPoints(100),
    _level(1),
    _name("Johnny"),
    _type("FR4G-TP"),
    _meleeAttackDamage(30),
    _rangedAttackDamage(20),
    _armorDamageReduction(5) {

    std::cout << this->_type << " " << this->_name;
    std::cout << " is constructed and says:\n'";
    std::cout << "Let me teach you the ways of magic!'" << std::endl;
    return;
}

FragTrap::FragTrap(const std::string &name) :
    _hitPoints(100),
    _maxHitPoints(100),
    _energyPoints(100),
    _maxEnergyPoints(100),
    _level(1),
    _name(name),
    _type("FR4G-TP"),
    _meleeAttackDamage(30),
    _rangedAttackDamage(20),
    _armorDamageReduction(5) {

    std::cout << this->_type << " " << this->_name;
    std::cout << " is constructed and says:\n'";
    std::cout << "Yessiree! This whole place would completely fall apart ";
    std::cout << "without old " << name << " keeping things humming along!'";
    std::cout << std::endl;
    return;
}

FragTrap::FragTrap(const FragTrap &src) :
    _maxHitPoints(src._maxHitPoints),
    _maxEnergyPoints(src._maxEnergyPoints),
    _type(src._type),
    _meleeAttackDamage(src._meleeAttackDamage),
    _rangedAttackDamage(src._rangedAttackDamage),
    _armorDamageReduction(src._armorDamageReduction) {

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
        this->_name = rhs.getName();
        this->_level = rhs.getLevel();
        this->_hitPoints = rhs.getHP();
        this->_energyPoints = rhs.getEP();
    }

    return *this;
}

std::string FragTrap::getName() const {

    return this->_name;
}

unsigned int FragTrap::getLevel() const {

    return this->_level;
}

unsigned int FragTrap::getHP() const {

    return this->_hitPoints;
}

unsigned int FragTrap::getEP() const {

    return this->_energyPoints;
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

void FragTrap::takeDamage(unsigned int amount) {

    std::cout << this->_type << " " << this->_name << " takes ";

    unsigned int damage = 0;
    if (amount > this->_armorDamageReduction)
    {
        if (amount - this->_armorDamageReduction > this->_hitPoints)
        {
            damage = this->_hitPoints;
        }
        else
        {
            damage = amount;
        }
    }

    std::cout << damage << " points of damage! ";
    this->_hitPoints -= damage;
    std::cout << this->_hitPoints << " HP left." << std::endl;

    return;
}

void FragTrap::beRepaired(unsigned int amount) {

    std::cout << this->_type << " " << this->_name << " is being repaired, ";

    unsigned int repair = 0;
    if (amount > this->_maxHitPoints - this->_hitPoints)
    {
        repair = this->_maxHitPoints - this->_hitPoints;
    }
    else
    {
        repair = amount;
    }

    std::cout << "recovering " << repair << " HP. ";
    this->_hitPoints += repair;
    std::cout << "It now has " << this->_hitPoints << " HP." << std::endl;

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