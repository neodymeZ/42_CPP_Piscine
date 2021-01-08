/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/29 03:14:37 by larosale          #+#    #+#             */
/*   Updated: 2020/12/30 01:52:35 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() : _weight (1500), _type("human")
{
    std::cout << "An average <" << this->_type << "> brain was created, ";
    std::cout << "its weight is <" << _weight << "> grams" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain died" << std::endl;
}

std::string Brain::identify() const
{
    std::ostringstream address;

    address << this;

    return address.str();
}
