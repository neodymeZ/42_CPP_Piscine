/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 15:01:03 by larosale          #+#    #+#             */
/*   Updated: 2021/01/20 17:16:40 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad() : _count(0), _squad() {

//    std::cout << "Default constructor called" << std::endl;
    return;
}

Squad::Squad(const Squad &src) : _count(0), _squad() {

//    std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return;
}

Squad::~Squad() {

//    std::cout << "Destructor called" << std::endl;
    for (int i = 0; i < this->_count; i++)
    {
        delete (this->_squad)[i];
    }
    return;
}

Squad &Squad::operator=(const Squad &rhs) {

//    std::cout << "Assignment operator called" << std::endl;

    if (this != &rhs)
    {
        // Clear the current instance before assignment
        // Subject states that all squad members will be always created with new
        if (this->_count)
        {
            for (int i = 0; i < this->_count; i++)
            {
                delete (this->_squad)[i];
            }
        }
        // Deep copy of squad members
        this->_count = rhs._count;
        for (int j = 0; j < this->_count; j++)
        {
            (this->_squad)[j] = ((rhs._squad)[j])->clone();
        }
    }

    return *this;
}

int Squad::getCount() const {

    return this->_count;
}

ISpaceMarine *Squad::getUnit(int index) const {

    if (index < 0 || index > this->_count - 1)
    {
        return NULL;
    }
    return (this->_squad)[index];
}

int Squad::push(ISpaceMarine *marine) {

    // Checking if the squad is full or marine is NULL
    if (this->_count == SQUAD_SIZE || !marine)
    {
        return this->_count;
    }

    // Checking if marine is already in squad
    for (int i = 0; i < this->_count; i++)
    {
        if ((this->_squad)[i] == marine)
        {
            return this->_count;
        }
    }

    (this->_squad)[this->_count] = marine;
    this->_count += 1;

    return this->_count;
}
