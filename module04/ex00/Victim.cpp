/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 15:01:03 by larosale          #+#    #+#             */
/*   Updated: 2021/01/19 01:51:32 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim() : _name("noname"){

    std::cout << "Some random victim called " << this->_name;
    std::cout << " just appeared!" << std::endl;
    return;
}

Victim::Victim(const std::string &name) : _name(name) {

    std::cout << "Some random victim called " << this->_name;
    std::cout << " just appeared!" << std::endl;
    return;
}

Victim::Victim(const Victim &src) {

    *this = src;

    std::cout << "Some random victim called " << this->_name;
    std::cout << " just appeared!" << std::endl;
    return;
}

Victim::~Victim() {

    std::cout << "Victim " << this->_name;
    std::cout << " just died for no apparent reason!" << std::endl;
    return;
}

Victim &Victim::operator=(const Victim &rhs) {

    if (this != &rhs)
    {
        this->_name = rhs._name;
    }

    return *this;
}

std::ostream &operator<<(std::ostream &o,const Victim &i) {

    o << "I'm " << i.getName();
    o << " and I like otters!" << std::endl;
    return o;
}

const std::string &Victim::getName() const {

    return this->_name;
}

void Victim::getPolymorphed() const {

    std::cout << this->_name;
    std::cout << " has been turned into a cute little sheep!" << std::endl;
}
