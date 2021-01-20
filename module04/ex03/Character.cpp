/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 15:01:03 by larosale          #+#    #+#             */
/*   Updated: 2021/01/21 01:53:34 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() {

//    std::cout << "Default constructor called" << std::endl;
    return;
}

Character::Character(const std::string &name) : _name(name), _inventory() {

//    std::cout << "Parametric constructor called" << std::endl;
    return;
}

Character::Character(const Character &src) : _inventory() {

//    std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return;
}

Character::~Character() {

//    std::cout << "Destructor called" << std::endl;
    for (int i = 0; i < MAX_INV; i++)
    {
        if ((this->_inventory)[i])
        {
            delete (this->_inventory)[i];
        }
    }
    return;
}

Character &Character::operator=(const Character &rhs) {

//    std::cout << "Assignment operator called" << std::endl;

    if (this != &rhs)
    {
        this->_name = rhs._name;

        for (int i = 0; i < MAX_INV; i++)
        {
            if ((this->_inventory)[i])
            {
                delete (this->_inventory)[i];
            }
            (this->_inventory)[i] = ((rhs._inventory)[i])->clone();
        }
    }

    return *this;
}

const std::string &Character::getName() const {

    return this->_name;
}

void Character::equip(AMateria *m) {

    for (int i = 0; i < MAX_INV; i++)
    {
        if ((this->_inventory)[i] == NULL)
        {
            (this->_inventory)[i] = m;
            return;
        }
    }

    return;
}

void Character::unequip(int idx) {

    if (idx < 0 || idx > MAX_INV - 1)
        return;

    this->_inventory[idx] = NULL;
    return;
}

void Character::use(int idx, ICharacter &target) {

    if (idx < 0 || idx > MAX_INV - 1 || (this->_inventory)[idx] == NULL)
        return;

    ((this->_inventory)[idx])->use(target);

    return;
}
