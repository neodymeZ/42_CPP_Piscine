/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BattleRobot.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 15:01:03 by larosale          #+#    #+#             */
/*   Updated: 2021/01/21 00:46:33 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BattleRobot.hpp"

BattleRobot::BattleRobot() : Enemy(250, "BattleRobot"){

    std::cout << "* mechanical sounds *" << std::endl;
    return;
}

BattleRobot::BattleRobot(const BattleRobot &src) {

    std::cout << "* mechanical sounds *" << std::endl;
    *this = src;
    return;
}

BattleRobot::~BattleRobot() {

    std::cout << "* explosion *" << std::endl;
    return;
}

BattleRobot &BattleRobot::operator=(const BattleRobot &rhs) {

//    std::cout << "Assignment operator called" << std::endl;

    if (this != &rhs)
    {
        this->_hp = rhs._hp;
        this->_type = rhs._type;
    }

    return *this;
}
