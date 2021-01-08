/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 18:34:17 by larosale          #+#    #+#             */
/*   Updated: 2021/01/08 20:02:28 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(const std::string &name) : _name(name), _weapon(NULL)
{
}

HumanB::~HumanB()
{
}

void HumanB::setWeapon(const Weapon &weapon)
{
    this->_weapon = &weapon;
}

void HumanB::attack() const
{
    std::cout << this->_name << " attacks with his ";
    std::cout << this->_weapon->getType() << std::endl;
}
