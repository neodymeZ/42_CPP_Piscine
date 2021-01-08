/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/29 03:43:28 by larosale          #+#    #+#             */
/*   Updated: 2020/12/30 01:53:42 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human()
{
    std::cout << "A human was born" << std::endl;
}

Human::~Human()
{
    std::cout << "Human died" << std::endl;
}

std::string Human::identify() const
{
    return (this->_brain).identify();
}

const Brain &Human::getBrain() const
{
    const Brain &brainRef = this->_brain;

    return brainRef;
}
