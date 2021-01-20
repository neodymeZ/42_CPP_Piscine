/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cow.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 15:01:03 by larosale          #+#    #+#             */
/*   Updated: 2021/01/20 19:50:01 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cow.hpp"

Cow::Cow() : Victim() {

    std::cout << "Mouuuu..." << std::endl;
    return;
}

Cow::Cow(const std::string &name) : Victim(name) {

    std::cout << "Mouuuu..." << std::endl;
    return;
}

Cow::Cow(const Cow &src) : Victim() {

    *this = src;

    std::cout << "Mouuuu..." << std::endl;
    return;
}

Cow::~Cow() {

    std::cout << "Maaaaa..." << std::endl;
    return;
}

Cow &Cow::operator=(const Cow &rhs) {

    if (this != &rhs)
    {
        this->_name = rhs._name;
    }

    return *this;
}

void Cow::getPolymorphed() const {

    std::cout << this->_name;
    std::cout << " has been turned into a cute rabbit!" << std::endl;
}
