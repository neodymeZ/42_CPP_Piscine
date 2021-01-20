/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 15:01:03 by larosale          #+#    #+#             */
/*   Updated: 2021/01/19 00:32:27 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() :
    _hitPoints(100),
    _energyPoints(100),
    _level(1),
    _name("noname"),
    _maxHitPoints(100),
    _maxEnergyPoints(100),
    _type("generic"),
    _meleeAttackDamage(30),
    _rangedAttackDamage(20),
    _armorDamageReduction(5) {

    std::cout << "A generic Claptrap was constructed." << std::endl;
    return;
}

ClapTrap::ClapTrap(const std::string type,
                    const unsigned int maxEnergyPoints,
                    const unsigned int maxHitPoints,
                    const unsigned int meleeAttackDamage,
                    const unsigned int rangedAttackDamage,
                    const unsigned int armorDamageReduction) :
    _hitPoints(maxHitPoints),
    _energyPoints(maxEnergyPoints),
    _level(1),
    _name("noname"),
    _maxHitPoints(maxHitPoints),
    _maxEnergyPoints(maxEnergyPoints),
    _type(type),
    _meleeAttackDamage(meleeAttackDamage),
    _rangedAttackDamage(rangedAttackDamage),
    _armorDamageReduction(armorDamageReduction) {

    std::cout << "A generic Claptrap was constructed." << std::endl;
    return;
}

ClapTrap::ClapTrap(const ClapTrap &src) {

    *this = src;

    std::cout << "A generic Claptrap was constructed." << std::endl;
    return;
}

ClapTrap::~ClapTrap() {

    std::cout << "A generic Claptrap was destroyed." << std::endl;
    return;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &rhs) {

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

void ClapTrap::takeDamage(unsigned int amount) {

    std::cout << this->_type << " " << this->_name << " takes ";

    unsigned int damage = 0;
    if (amount > this->_armorDamageReduction)
    {
        if (amount - this->_armorDamageReduction >= this->_hitPoints)
        {
            damage = this->_hitPoints;
        }
        else
        {
            damage = amount - this->_armorDamageReduction;
        }
    }

    std::cout << damage << " points of damage! ";
    this->_hitPoints -= damage;
    std::cout << this->_hitPoints << " HP left." << std::endl;

    return;
}

void ClapTrap::beRepaired(unsigned int amount) {

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
