/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pig.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 15:01:03 by larosale          #+#    #+#             */
/*   Updated: 2021/01/20 19:46:15 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pig.hpp"

Pig::Pig() : Victim() {

    std::cout << "Oink oink." << std::endl;
    return;
}

Pig::Pig(const std::string &name) : Victim(name) {

    std::cout << "Oink oink." << std::endl;
    return;
}

Pig::Pig(const Pig &src) : Victim() {

    *this = src;

    std::cout << "Oink oink." << std::endl;
    return;
}

Pig::~Pig() {

    std::cout << "Screach..." << std::endl;
    return;
}

Pig &Pig::operator=(const Pig &rhs) {

    if (this != &rhs)
    {
        this->_name = rhs._name;
    }

    return *this;
}

void Pig::getPolymorphed() const {

    std::cout << this->_name;
    std::cout << " has been turned into a human!" << std::endl;
}
