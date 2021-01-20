/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 15:01:03 by larosale          #+#    #+#             */
/*   Updated: 2021/01/21 00:39:17 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy() {

//    std::cout << "Default constructor called" << std::endl;
    return;
}

Enemy::Enemy(int hp, const std::string &type) :
    _hp(hp), _type(type) {

//    std::cout << "Parametric constructor called" << std::endl;
    return;
}

Enemy::Enemy(const Enemy &src) {

//    std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return;
}

Enemy::~Enemy() {

//    std::cout << "Destructor called" << std::endl;
    return;
}

Enemy &Enemy::operator=(const Enemy &rhs) {

//    std::cout << "Assignment operator called" << std::endl;

    if (this != &rhs)
    {
        this->_hp = rhs._hp;
        this->_type = rhs._type;
    }

    return *this;
}

int Enemy::getHP() const {

    return this->_hp;
}

const std::string &Enemy::getType() const {

    return this->_type;
}

void Enemy::takeDamage(int damage) {

    if (damage < 0)
    {
        return;
    }

    if (this->_hp <= damage)
    {
        this->_hp = 0;
    }
    else
    {
        this->_hp -= damage;
    }

    return;
}
