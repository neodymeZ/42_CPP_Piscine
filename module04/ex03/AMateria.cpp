/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 15:01:03 by larosale          #+#    #+#             */
/*   Updated: 2021/01/20 19:21:41 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : _xp(0) {

//    std::cout << "Default constructor called" << std::endl;
    return;
}

AMateria::AMateria(const std::string &type) : _type(type), _xp(0) {

//    std::cout << "Parametric constructor called" << std::endl;
    return;
}

AMateria::AMateria(const AMateria &src) : _type(src._type), _xp(src._xp) {

//    std::cout << "Copy constructor called" << std::endl;
    return;
}

AMateria::~AMateria() {

//    std::cout << "Destructor called" << std::endl;
    return;
}

AMateria &AMateria::operator=(const AMateria &rhs) {

//    std::cout << "Assignment operator called" << std::endl;

    if (this != &rhs)
    {
        this->_xp = rhs._xp;
    }

    return *this;
}

const std::string &AMateria::getType() const {

    return this->_type;
}

unsigned int AMateria::getXP() const {

    return this->_xp;
}

void AMateria::use(ICharacter &target) {

    if (target.getName() == "") {}
    this->_xp += 10;
    return;
}
