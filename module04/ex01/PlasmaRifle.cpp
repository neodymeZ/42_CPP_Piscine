/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 15:01:03 by larosale          #+#    #+#             */
/*   Updated: 2021/01/19 14:46:52 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21) {

//    std::cout << "Default constructor called" << std::endl;
    return;
}

PlasmaRifle::PlasmaRifle(const PlasmaRifle &src) {

//    std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return;
}

PlasmaRifle::~PlasmaRifle() {

//    std::cout << "Destructor called" << std::endl;
    return;
}

PlasmaRifle &PlasmaRifle::operator=(const PlasmaRifle &rhs) {

//    std::cout << "Assignment operator called" << std::endl;

    if (this != &rhs)
    {
        this->_name = rhs._name;
        this->_apcost = rhs._apcost;
        this->_damage = rhs._damage;
    }

    return *this;
}

void PlasmaRifle::attack() const {

    std::cout << "* piouuu piouuu piouuu *" << std::endl;
    return;
}
