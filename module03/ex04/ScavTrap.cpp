/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 15:01:03 by larosale          #+#    #+#             */
/*   Updated: 2021/01/19 00:43:40 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("SC4V-TP", 50, 100, 20, 15, 3) {

    std::cout << this->_type << " " << this->_name;
    std::cout << " is constructed and says:\n'";
    std::cout << "Scavtrap is here!'" << std::endl;
    return;
}

ScavTrap::ScavTrap(const std::string &name) :
    ClapTrap("SC4V-TP", 50, 100, 20, 15, 3) {

    this->_name = name;

    std::cout << this->_type << " " << this->_name;
    std::cout << " is constructed and says:\n'";
    std::cout << "Booting sequence complete. Hello! I am your new steward bot.";
    std::cout << " My name is " << name << " let us know.'";
    std::cout << std::endl;
    return;
}

ScavTrap::ScavTrap(const ScavTrap &src) {

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
