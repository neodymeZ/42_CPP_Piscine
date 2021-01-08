/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/30 01:56:18 by larosale          #+#    #+#             */
/*   Updated: 2021/01/08 20:06:56 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string &type) : _type(type)
{
}

Weapon::~Weapon()
{
}

const std::string &Weapon::getType() const
{
    return this->_type;
}

void Weapon::setType(const std::string &type)
{
    this->_type = type;
}
