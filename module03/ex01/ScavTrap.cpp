/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 15:01:03 by larosale          #+#    #+#             */
/*   Updated: 2021/01/18 00:08:08 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() :
    _hitPoints(100),
    _maxHitPoints(100),
    _energyPoints(50),
    _maxEnergyPoints(50),
    _level(1),
    _name("Johnny"),
    _type("SC4V-TP"),
    _meleeAttackDamage(20),
    _rangedAttackDamage(15),
    _armorDamageReduction(3) {

    std::cout << this->_type << " " << this->_name;
    std::cout << " is constructed and says:\n'";
    std::cout << "Scavtrap is here!'" << std::endl;
    return;
}

ScavTrap::ScavTrap(const std::string &name) :
    _hitPoints(100),
    _maxHitPoints(100),
    _energyPoints(50),
    _maxEnergyPoints(50),
    _level(1),
    _name(name),
    _type("SC4V-TP"),
    _meleeAttackDamage(20),
    _rangedAttackDamage(15),
    _armorDamageReduction(3) {

    std::cout << this->_type << " " << this->_name;
    std::cout << " is constructed and says:\n'";
    std::cout << "Booting sequence complete. Hello! I am your new steward bot.";
    std::cout << " My name is " << name << " let us know.'";
    std::cout << std::endl;
    return;
}

ScavTrap::ScavTrap(const ScavTrap &src) :
    _maxHitPoints(src._maxHitPoints),
    _maxEnergyPoints(src._maxEnergyPoints),
    _type(src._type),
    _meleeAttackDamage(src._meleeAttackDamage),
    _rangedAttackDamage(src._rangedAttackDamage),
    _armorDamageReduction(src._armorDamageReduction) {

    *this = src;

    std::cout << this->_type << " " << this->_name;
    std::cout << " is constructed and says:\n'";
    std::cout << "Booting sequence complete. Hello! I am your new steward bot.";
    std::cout << " My name is " << this->_name << " let us know.'";
    std::cout << std::endl;

    return;
}

ScavTrap::~ScavTrap() {

    std::cout << this->_type << " " << this->_name << " says:\n'";
    std::cout << "Huh, robots don't do that.' and is destroyed." << std::endl;
    return;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &rhs) {

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

std::string ScavTrap::getName() const {

    return this->_name;
}

unsigned int ScavTrap::getLevel() const {

    return this->_level;
}

unsigned int ScavTrap::getHP() const {

    return this->_hitPoints;
}

unsigned int ScavTrap::getEP() const {

    return this->_energyPoints;
}

void ScavTrap::rangedAttack(const std::string &target) const {

    std::cout << this->_type << " " << this->_name << " shoots at " << target;
    std::cout << " with a pistol, causing " << this->_rangedAttackDamage;
    std::cout << " points of damage!" << std::endl;
    return;
}

void ScavTrap::meleeAttack(const std::string &target) const {

    std::cout << this->_type << " " << this->_name << " attacks " << target;
    std::cout << " with a knife, causing " << this->_meleeAttackDamage;
    std::cout << " points of damage!" << std::endl;
    return;
}

void ScavTrap::takeDamage(unsigned int amount) {

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

void ScavTrap::beRepaired(unsigned int amount) {

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

void ScavTrap::challengeNewcomer() {

    const std::string challenges[5] = {
        "You versus me! Me versus you! Either way!",
        "I will prove to you my robotic superiority!",
        "Dance battle! Or, you know... regular battle.",
        "Man versus machine! Very tiny streamlined machine!",
        "Care to have a friendly duel?"
    };

    if (this->_maxEnergyPoints && this->_level)
    {
        std::cout << this->_type << " " << this->_name;
        std::cout << " challenges you saying:\n'";
        std::cout << challenges[std::rand() % 5] << "'" << std::endl;
    }

    return;
}
