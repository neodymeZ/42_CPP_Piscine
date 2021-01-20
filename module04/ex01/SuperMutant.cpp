/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 15:01:03 by larosale          #+#    #+#             */
/*   Updated: 2021/01/21 00:40:02 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant"){

    std::cout << "Gaaah. Me want smash heads!" << std::endl;
    return;
}

SuperMutant::SuperMutant(const SuperMutant &src) {

    std::cout << "Gaaah. Me want smash heads!" << std::endl;
    *this = src;
    return;
}

SuperMutant::~SuperMutant() {

    std::cout << "Aaargh..." << std::endl;
    return;
}

SuperMutant &SuperMutant::operator=(const SuperMutant &rhs) {

//    std::cout << "Assignment operator called" << std::endl;

    if (this != &rhs)
    {
        this->_hp = rhs._hp;
        this->_type = rhs._type;
    }

    return *this;
}

void SuperMutant::takeDamage(int damage) {

    if (damage < 0)
    {
        return;
    }

    if (this->_hp <= damage - 3)
    {
        this->_hp = 0;
    }
    else
    {
        this->_hp -= damage - 3;
    }
    
    return;
}
