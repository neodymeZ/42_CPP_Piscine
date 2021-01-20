/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Air.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 15:01:03 by larosale          #+#    #+#             */
/*   Updated: 2021/01/20 19:20:58 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Air.hpp"

Air::Air() : AMateria("air") {

//    std::cout << "Default constructor called" << std::endl;
    return;
}

Air::Air(const Air &src) : AMateria("air") {

//    std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return;
}

Air::~Air() {

//    std::cout << "Destructor called" << std::endl;
    return;
}

Air &Air::operator=(const Air &rhs) {

//    std::cout << "Assignment operator called" << std::endl;

    if (this != &rhs)
    {
        this->_xp = rhs._xp;
    }

    return *this;
}

Air *Air::clone() const {

    return (new Air(*this));
}

void Air::use(ICharacter &target) {

    std::cout << "* blows at " << target.getName();
    std::cout << " with brisk air *"<< std::endl;
    AMateria::use(target);
    return;
}
