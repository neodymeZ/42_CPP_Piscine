/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 15:01:03 by larosale          #+#    #+#             */
/*   Updated: 2021/01/19 01:34:48 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer() {

    return;
}

Sorcerer::Sorcerer(const std::string &name, const std::string &title) :
    _name(name), _title(title) {

    std::cout << this->_name << ", " << this->_title;
    std::cout << ", is born!" << std::endl;
    return;
}

Sorcerer::Sorcerer(const Sorcerer &src) {

    *this = src;

    std::cout << this->_name << ", " << this->_title;
    std::cout << ", is born!" << std::endl;
    return;
}

Sorcerer::~Sorcerer() {

    std::cout << this->_name << ", " << this->_title;
    std::cout << ", is dead. Consequences will never be the same!" << std::endl;
    return;
}

Sorcerer &Sorcerer::operator=(const Sorcerer &rhs) {

    if (this != &rhs)
    {
        this->_name = rhs._name;
        this->_title = rhs._title;
    }

    return *this;
}

std::ostream &operator<<(std::ostream &o,const Sorcerer &i) {

    o << "I am " << i.getName() << ", " << i.getTitle();
    o << ", and I like ponies!" << std::endl;
    return o;
}

const std::string &Sorcerer::getName() const {

    return this->_name;
}

const std::string &Sorcerer::getTitle() const {

    return this->_title;
}

void Sorcerer::polymorph(const Victim &victim) const {

    victim.getPolymorphed();
    return;
}
