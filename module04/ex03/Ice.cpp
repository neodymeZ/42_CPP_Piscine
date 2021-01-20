/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 15:01:03 by larosale          #+#    #+#             */
/*   Updated: 2021/01/20 19:20:47 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {

//    std::cout << "Default constructor called" << std::endl;
    return;
}

Ice::Ice(const Ice &src) : AMateria("ice") {

//    std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return;
}

Ice::~Ice() {

//    std::cout << "Destructor called" << std::endl;
    return;
}

Ice &Ice::operator=(const Ice &rhs) {

//    std::cout << "Assignment operator called" << std::endl;

    if (this != &rhs)
    {
        this->_xp = rhs._xp;
    }

    return *this;
}

Ice *Ice::clone() const {

    return (new Ice(*this));
}

void Ice::use(ICharacter &target) {

    std::cout << "* shoots an ice bolt at " << target.getName();
    std::cout << " *" << std::endl;
    AMateria::use(target);
    return;
}
