/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 15:00:59 by larosale          #+#    #+#             */
/*   Updated: 2021/01/21 00:41:06 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <iostream>

class AWeapon {

public:

    AWeapon();
    AWeapon(const std::string &name, int apcost, int damage);
    AWeapon(const AWeapon &src);
    virtual ~AWeapon();

    AWeapon &operator=(const AWeapon &rhs);

    const std::string &getName() const;
    int getAPCost() const;
    int getDamage() const;

    virtual void attack() const = 0;

protected:

    std::string _name;
    int _apcost;
    int _damage;

};

#endif
