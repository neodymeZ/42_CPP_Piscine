/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 15:01:03 by larosale          #+#    #+#             */
/*   Updated: 2021/01/20 19:21:07 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {

//    std::cout << "Default constructor called" << std::endl;
    return;
}

Cure::Cure(const Cure &src) : AMateria("cure") {

//    std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return;
}

Cure::~Cure() {

//    std::cout << "Destructor called" << std::endl;
    return;
}

Cure &Cure::operator=(const Cure &rhs) {

//    std::cout << "Assignment operator called" << std::endl;

    if (this != &rhs)
    {
        this->_xp = rhs._xp;
    }

    return *this;
}

Cure *Cure::clone() const {

    return (new Cure(*this));
}

void Cure::use(ICharacter &target) {

    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
    AMateria::use(target);
    return;
}
