/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/27 02:48:52 by larosale          #+#    #+#             */
/*   Updated: 2020/12/27 16:36:19 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent() : _zombieType("") {}

ZombieEvent::~ZombieEvent() {}

void ZombieEvent::setZombieType(std::string type)
{
    this->_zombieType = type;
}

Zombie* ZombieEvent::newZombie(std::string name)
{
    Zombie *zombie = new Zombie(name, this->_zombieType);
    return zombie;
}

void ZombieEvent::randomChump()
{
    std::string name = _randString(NAME_LEN);
    Zombie zombie(name, this->_zombieType);
    zombie.announce();
    return;
}

std::string ZombieEvent::_randString(int len)
{
    std::string randString(len, ' ');

    int i = 0;
    while (i < len) {
        randString[i] = 97 + (std::rand() % 26);
        i++;
    }

    return randString;
}
