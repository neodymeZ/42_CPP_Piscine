/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 03:25:43 by larosale          #+#    #+#             */
/*   Updated: 2021/01/20 18:42:36 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria {

public:

    AMateria(const std::string &type);
    AMateria(const AMateria &src);
    virtual ~AMateria();

    AMateria &operator=(const AMateria &rhs);

    const std::string &getType() const; //Returns the materia type
    unsigned int getXP() const; //Returns the Materia's XP
    virtual AMateria *clone() const = 0;
    virtual void use(ICharacter &target);

protected:

    AMateria();

    std::string _type;
    unsigned int _xp;

};

#endif
