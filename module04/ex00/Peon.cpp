/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 15:01:03 by larosale          #+#    #+#             */
/*   Updated: 2021/01/19 01:51:45 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon() : Victim() {

    std::cout << "Zog zog." << std::endl;
    return;
}

Peon::Peon(const std::string &name) : Victim(name) {

    std::cout << "Zog zog." << std::endl;
    return;
}

Peon::Peon(const Peon &src) : Victim() {

    *this = src;

    std::cout << "Zog zog." << std::endl;
    return;
}

Peon::~Peon() {

    std::cout << "Bleuark..." << std::endl;
    return;
}

Peon &Peon::operator=(const Peon &rhs) {

    if (this != &rhs)
    {
        this->_name = rhs._name;
    }

    return *this;
}

void Peon::getPolymorphed() const {

    std::cout << this->_name;
    std::cout << " has been turned into a pink pony!" << std::endl;
}
