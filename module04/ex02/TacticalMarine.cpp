/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 15:01:03 by larosale          #+#    #+#             */
/*   Updated: 2021/01/20 14:11:48 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine() {

    std::cout << "Tactical Marine ready for battle!" << std::endl;
    return;
}

TacticalMarine::TacticalMarine(const TacticalMarine &src) {

    std::cout << "Tactical Marine ready for battle!" << std::endl;
    *this = src;
    return;
}

TacticalMarine::~TacticalMarine() {

    std::cout << "Aaargh..." << std::endl;
    return;
}

TacticalMarine &TacticalMarine::operator=(const TacticalMarine &rhs) {

//    std::cout << "Assignment operator called" << std::endl;
    if (this != &rhs) {}
    return *this;
}

TacticalMarine *TacticalMarine::clone() const {

    return (new TacticalMarine(*this));
}

void TacticalMarine::battleCry() const {

    std::cout << "For the holy PLOT!" << std::endl;
}

void TacticalMarine::rangedAttack() const {

    std::cout << "* attacks with a bolter *" << std::endl;
}
void TacticalMarine::meleeAttack() const {

    std::cout << "* attacks with a chainsword *" << std::endl;
}
