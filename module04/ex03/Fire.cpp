/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fire.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 15:01:03 by larosale          #+#    #+#             */
/*   Updated: 2021/01/20 19:20:54 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fire.hpp"

Fire::Fire() : AMateria("fire") {

//    std::cout << "Default constructor called" << std::endl;
    return;
}

Fire::Fire(const Fire &src) : AMateria("fire") {

//    std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return;
}

Fire::~Fire() {

//    std::cout << "Destructor called" << std::endl;
    return;
}

Fire &Fire::operator=(const Fire &rhs) {

//    std::cout << "Assignment operator called" << std::endl;

    if (this != &rhs)
    {
        this->_xp = rhs._xp;
    }

    return *this;
}

Fire *Fire::clone() const {

    return (new Fire(*this));
}

void Fire::use(ICharacter &target) {

    std::cout << "* throws a fireball at " << target.getName();
    std::cout << " *"<< std::endl;
    AMateria::use(target);
    return;
}
