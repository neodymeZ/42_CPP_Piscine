/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 15:01:03 by larosale          #+#    #+#             */
/*   Updated: 2021/01/20 14:12:06 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator() {

    std::cout << "* teleports from space *" << std::endl;
    return;
}

AssaultTerminator::AssaultTerminator(const AssaultTerminator &src) {

    std::cout << "* teleports from space *" << std::endl;
    *this = src;
    return;
}

AssaultTerminator::~AssaultTerminator() {

    std::cout << "I’ll be back..." << std::endl;
    return;
}

AssaultTerminator &AssaultTerminator::operator=(const AssaultTerminator &rhs) {

//    std::cout << "Assignment operator called" << std::endl;
    if (this != &rhs) {}
    return *this;
}

AssaultTerminator *AssaultTerminator::clone() const {

    return (new AssaultTerminator(*this));
}

void AssaultTerminator::battleCry() const {

    std::cout << "This code is unclean. PURIFY IT!" << std::endl;
}

void AssaultTerminator::rangedAttack() const {

    std::cout << "* does nothing *" << std::endl;
}
void AssaultTerminator::meleeAttack() const {

    std::cout << "* attacks with chainfists *" << std::endl;
}
