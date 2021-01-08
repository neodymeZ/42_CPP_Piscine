/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/27 01:49:39 by larosale          #+#    #+#             */
/*   Updated: 2020/12/30 02:02:37 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony()
    : _ponyName(""), _ponyColor("")
{
    std::cout << "An unnamed and uncolored pony was born!" << std::endl;
}

Pony::Pony(std::string name, std::string color)
    : _ponyName(name), _ponyColor(color)
{
    std::cout << "A pony named '" << name << "' and of '" << color;
    std::cout << "' color was born" << std::endl;
}

Pony::~Pony()
{
    std::cout << "A pony died" << std::endl;
}

void Pony::speak() const
{
    std::cout << "Neeeigh!" << std::endl;
}

std::string Pony::getName() const
{
    return this->_ponyName;
}

std::string Pony::getColor() const
{
    return this->_ponyColor;
}
