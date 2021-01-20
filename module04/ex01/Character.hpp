/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 15:00:59 by larosale          #+#    #+#             */
/*   Updated: 2021/01/20 13:26:56 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character {

public:

    Character(const std::string &name);
    Character(const Character &src);
    ~Character();

    Character &operator=(const Character &rhs);

    const std::string &getName() const;
    int getAP() const;
    AWeapon *getWeapon() const;

    void recoverAP();
    void equip(AWeapon *weapon);
    void attack(Enemy *enemy);

private:

    Character();

    std::string _name;
    int _ap;
    AWeapon *_weapon;

};

std::ostream &operator<<(std::ostream &o,const Character &i);

#endif
