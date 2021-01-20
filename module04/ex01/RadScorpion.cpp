/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 15:01:03 by larosale          #+#    #+#             */
/*   Updated: 2021/01/19 14:16:31 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion"){

    std::cout << "* click click click *" << std::endl;
    return;
}

RadScorpion::RadScorpion(const RadScorpion &src) {

    std::cout << "* click click click *" << std::endl;
    *this = src;
    return;
}

RadScorpion::~RadScorpion() {

    std::cout << "* SPROTCH *" << std::endl;
    return;
}

RadScorpion &RadScorpion::operator=(const RadScorpion &rhs) {

//    std::cout << "Assignment operator called" << std::endl;

    if (this != &rhs)
    {
        this->_hp = rhs._hp;
        this->_type = rhs._type;
    }

    return *this;
}
