/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/27 02:28:24 by larosale          #+#    #+#             */
/*   Updated: 2020/12/27 03:52:00 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() : _zombieName(""), _zombieType("")
{
    std::cout << "A clean zombie was created" << std::endl;
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
