/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 15:01:03 by larosale          #+#    #+#             */
/*   Updated: 2021/01/16 17:06:39 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_fractionSize = 8;

Fixed::Fixed() : _fixedPointValue(0) {

    std::cout << "Default constructor called" << std::endl;
    return;
}

Fixed::Fixed(const Fixed &src) {

    std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return;
}

Fixed::~Fixed() {

    std::cout << "Destructor called" << std::endl;
    return;
}

Fixed &Fixed::operator=(const Fixed &rhs) {

    std::cout << "Assignation operator called" << std::endl;

    if (this != &rhs)
    {
        this->_fixedPointValue = rhs.getRawBits();
    }

    return *this;
}

int Fixed::getRawBits() const {

    std::cout << "getRawBits member function called" << std::endl;
    return this->_fixedPointValue;
}

void Fixed::setRawBits(const int raw) {
    
    std::cout << "setRawBits member function called" << std::endl;
    this->_fixedPointValue = raw;
    return;
}
