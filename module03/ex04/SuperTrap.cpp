/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 15:01:03 by larosale          #+#    #+#             */
/*   Updated: 2021/01/19 00:43:49 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap() : ClapTrap("SP3R-TP", 120, 100, 60, 20, 5),
    FragTrap(), NinjaTrap() {

    std::cout << this->_type << " " << this->_name;
    std::cout << " is constructed and says:\n'";
    std::cout << "You'd better run!'" << std::endl;
    return;
}

SuperTrap::SuperTrap(const std::string &name) :
    ClapTrap("SP3R-TP", 120, 100, 60, 20, 5), FragTrap(), NinjaTrap() {

    this->_name = name;

    std::cout << this->_type << " " << this->_name;
    std::cout << " is constructed and says:\n'";
    std::cout << "Here comes the real trouble!'" << std::endl;
    return;
}

SuperTrap::SuperTrap(const SuperTrap &src) {

    *this = src;

    std::cout << this->_type << " " << this->_name;
    std::cout << " is constructed and says:\n'";
    std::cout << "Here comes the real trouble!'" << std::endl;

    return;
}

SuperTrap::~SuperTrap() {

    std::cout << this->_type << " " << this->_name << " says:\n'";
    std::cout << "We're not saying goodbye.' and is destroyed.";
    std::cout << std::endl;
    return;
}

SuperTrap &SuperTrap::operator=(const SuperTrap &rhs) {

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

void SuperTrap::rangedAttack(const std::string &target) const {

    return this->FragTrap::rangedAttack(target);
}

void SuperTrap::meleeAttack(const std::string &target) const {

    return this->NinjaTrap::meleeAttack(target);
}
