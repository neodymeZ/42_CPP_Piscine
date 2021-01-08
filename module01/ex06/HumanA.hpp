/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/30 02:22:46 by larosale          #+#    #+#             */
/*   Updated: 2021/01/08 18:35:16 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanA {

public:

    HumanA(const std::string &name, const Weapon &weapon);
    ~HumanA();

    void attack() const;

private:

    std::string _name;
    const Weapon &_weapon;

};

#endif
