/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 15:01:03 by larosale          #+#    #+#             */
/*   Updated: 2021/01/19 14:47:10 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50) {

//    std::cout << "Default constructor called" << std::endl;
    return;
}

PowerFist::PowerFist(const PowerFist &src) {

//    std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return;
}

PowerFist::~PowerFist() {

//    std::cout << "Destructor called" << std::endl;
    return;
}

PowerFist &PowerFist::operator=(const PowerFist &rhs) {

//    std::cout << "Assignment operator called" << std::endl;

    if (this != &rhs)
    {
        this->_name = rhs._name;
        this->_apcost = rhs._apcost;
        this->_damage = rhs._damage;
    }

    return *this;
}

void PowerFist::attack() const {

    std::cout << "* pschhh... SBAM! *" << std::endl;
    return ;
}
