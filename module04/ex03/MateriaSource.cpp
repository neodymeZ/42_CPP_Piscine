/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 15:01:03 by larosale          #+#    #+#             */
/*   Updated: 2021/01/20 18:30:37 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : _source() {

//    std::cout << "Default constructor called" << std::endl;
    return;
}

MateriaSource::MateriaSource(const MateriaSource &src) : _source() {

//    std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return;
}

MateriaSource::~MateriaSource() {

//    std::cout << "Destructor called" << std::endl;
    for (int i = 0; i < MAX_SRC; i++)
    {
        if ((this->_source)[i])
        {
            delete (this->_source)[i];
        }
    }

    return;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &rhs) {

//    std::cout << "Assignment operator called" << std::endl;

    if (this != &rhs)
    {
        for (int i = 0; i < MAX_SRC; i++)
        {
            if ((this->_source)[i])
            {
                delete (this->_source)[i];
            }
            (this->_source)[i] = ((rhs._source)[i])->clone();
        }
    }

    return *this;
}

void MateriaSource::learnMateria(AMateria *m) {

    if (!m)
    {
        return;
    }

    for (int i = 0; i < MAX_SRC; i++)
    {
        if ((this->_source)[i] == NULL)
        {
            (this->_source)[i] = m;
            return;
        }
    }

    return;
}

AMateria *MateriaSource::createMateria(const std::string &type) {

    for (int i = 0; i < MAX_SRC; i++)
    {
        if ((this->_source)[i] && ((this->_source)[i])->getType() == type)
            return ((this->_source)[i])->clone();
    }

    return (0);
}
