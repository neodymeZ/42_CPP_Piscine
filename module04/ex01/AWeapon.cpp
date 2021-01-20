/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 15:01:03 by larosale          #+#    #+#             */
/*   Updated: 2021/01/20 13:27:25 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon() {

//    std::cout << "Default constructor called" << std::endl;
    return;
}

AWeapon::AWeapon(const std::string &name, int apcost, int damage) :
    _name(name), _apcost(apcost), _damage(damage) {

//    std::cout << "Parametric constructor called" << std::endl;
    return;
}

AWeapon::AWeapon(const AWeapon &src) {

//    std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return;
}

AWeapon::~AWeapon() {

//    std::cout << "Destructor called" << std::endl;
    return;
}

AWeapon &AWeapon::operator=(const AWeapon &rhs) {

//    std::cout << "Assignment operator called" << std::endl;

    if (this != &rhs)
    {
        this->_name = rhs._name;
        this->_apcost = rhs._apcost;
        this->_damage = rhs._damage;
    }

    return *this;
}

const std::string &AWeapon::getName() const {

    return this->_name;
}

int AWeapon::getAPCost() const {

    return this->_apcost;
}

int AWeapon::getDamage() const {

    return this->_damage;
}
