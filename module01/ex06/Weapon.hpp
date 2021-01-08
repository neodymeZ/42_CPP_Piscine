/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/30 01:57:06 by larosale          #+#    #+#             */
/*   Updated: 2020/12/30 02:42:48 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon {

public:

    Weapon(const std::string &type);
    ~Weapon();

    const std::string &getType() const;
    void setType(const std::string &type);

private:

    std::string _type;

};

#endif
