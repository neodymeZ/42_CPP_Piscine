/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 15:01:03 by larosale          #+#    #+#             */
/*   Updated: 2021/01/20 13:27:12 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() {

//    std::cout << "Default constructor called" << std::endl;
    return;
}

Character::Character(const std::string &name) :
    _name(name), _ap(40), _weapon(NULL) {

//    std::cout << "Parametric constructor called" << std::endl;
    return;
}

Character::Character(const Character &src) {

//    std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return;
}

Character::~Character() {

//    std::cout << "Destructor called" << std::endl;
    return;
}

Character &Character::operator=(const Character &rhs) {

//    std::cout << "Assignment operator called" << std::endl;

    if (this != &rhs)
    {
        this->_name = rhs._name;
        this->_ap = rhs._ap;
        this->_weapon = rhs._weapon;
    }

    return *this;
}

const std::string &Character::getName() const {

    return this->_name;
}

int Character::getAP() const {

    return this->_ap;
}

AWeapon *Character::getWeapon() const {

    return this->_weapon;
}

void Character::recoverAP() {

    std::cout << "Recovering APs..." << std::endl;

    if (this->_ap < 30)
    {
        this->_ap += 10;
    }
    else
    {
        this->_ap = 40;
    }

    return;
}

void Character::equip(AWeapon *weapon) {

    this->_weapon = weapon;
    return;
}

void Character::attack(Enemy *enemy) {

    if (this->_weapon && enemy)
    {
        if (this->_ap >= this->_weapon->getAPCost())
        {
            std::cout << this->_name << " attacks " << enemy->getType();
            std::cout << " with a " << this->_weapon->getName() << std::endl;

            this->_weapon->attack();
            enemy->takeDamage(this->_weapon->getDamage());
            this->_ap -= this->_weapon->getAPCost();

            if (enemy->getHP() <= 0)
            {
                delete enemy;
            }
        }
        else
        {
            std::cout << "Not enough APs to shoot, please recover" << std::endl;
        }
    }

    return;
}

std::ostream &operator<<(std::ostream &o,const Character &i) {

    o << i.getName() << " has " << i.getAP() << " AP and ";

    if (i.getWeapon() != NULL)
    {
        o << "wields a " << (i.getWeapon())->getName() << std::endl;
    }
    else
    {
        o << "is unarmed" << std::endl;
    }

    return o;
}
