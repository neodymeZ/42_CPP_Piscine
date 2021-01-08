/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/28 20:23:22 by larosale          #+#    #+#             */
/*   Updated: 2020/12/29 03:06:48 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N)
{
    this->_count = N;
    this->_horde = new Zombie[N];
    std::cout << "-------------------------------" << std::endl;
    std::cout << "Zombie horde was created. ";
    std::cout << "ANNOUNCE YOURSELVES!" << std::endl;
    this->announce();
}

ZombieHorde::~ZombieHorde()
{
    delete [] _horde;
    std::cout << "Zombie horde was destroyed" << std::endl;
}

void ZombieHorde::announce()
{
    int i = 0;

    while (i < _count) {
        (this->_horde)[i].announce();
        i++;
    }
}
