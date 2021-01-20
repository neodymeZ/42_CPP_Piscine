/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 15:00:59 by larosale          #+#    #+#             */
/*   Updated: 2021/01/20 18:45:59 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include "ICharacter.hpp"
# include "AMateria.hpp"

# define MAX_INV 4

class Character : public ICharacter {

public:

    Character(const std::string &name);
    Character(const Character &src);
    ~Character();

    Character &operator=(const Character &rhs);

    virtual const std::string &getName() const;
    virtual void equip(AMateria *m);
    virtual void unequip(int idx);
    virtual void use(int idx, ICharacter &target);

private:

    std::string _name;
    AMateria *_inventory[MAX_INV];

    Character();

};

#endif
