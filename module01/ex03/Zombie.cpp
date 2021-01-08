/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/27 02:28:24 by larosale          #+#    #+#             */
/*   Updated: 2020/12/29 03:01:30 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() : _zombieName(_randString(8)), _zombieType("private")
{
    std::cout << "A zombie was created" << std::endl;
}

Zombie::Zombie(std::string name, std::string type)
    : _zombieName(name), _zombieType(type)
{
    std::cout << "A zombie was created" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "A zombie was destroyed" << std::endl;
}

void Zombie::announce()
{
    std::cout << "<" << this->_zombieName << " (" << this->_zombieType;
    std::cout << ")> Braiiiiiiinnnssss..." << std::endl;
}

std::string Zombie::_randString(int len)
{
    std::string randString(len, ' ');

    int i = 0;
    while (i < len) {
        randString[i] = 97 + (std::rand() % 26);
        i++;
    }

    return randString;
}
