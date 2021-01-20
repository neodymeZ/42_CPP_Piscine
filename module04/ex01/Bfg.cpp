/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bfg.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 15:01:03 by larosale          #+#    #+#             */
/*   Updated: 2021/01/21 00:50:40 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bfg.hpp"

Bfg::Bfg() : AWeapon("BFG 9000", 40, 500) {

//    std::cout << "Default constructor called" << std::endl;
    return;
}

Bfg::Bfg(const Bfg &src) {

//    std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return;
}

Bfg::~Bfg() {

//    std::cout << "Destructor called" << std::endl;
    return;
}

Bfg &Bfg::operator=(const Bfg &rhs) {

//    std::cout << "Assignment operator called" << std::endl;

    if (this != &rhs)
    {
        this->_name = rhs._name;
        this->_apcost = rhs._apcost;
        this->_damage = rhs._damage;
    }

    return *this;
}

void Bfg::attack() const {

    std::cout << "* BOOOOOOOOM! *" << std::endl;
    return ;
}
