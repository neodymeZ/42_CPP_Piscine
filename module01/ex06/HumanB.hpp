/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 18:34:51 by larosale          #+#    #+#             */
/*   Updated: 2021/01/08 20:40:14 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanB {

public:

    HumanB(const std::string &name);
    ~HumanB();

    void attack() const;
    void setWeapon(const Weapon &weapon);

private:

    std::string _name;
    const Weapon *_weapon;

};

#endif
