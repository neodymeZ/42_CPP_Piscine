/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 15:00:59 by larosale          #+#    #+#             */
/*   Updated: 2021/01/19 00:39:58 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap {

public:

    ClapTrap();
    ClapTrap(const std::string type,
            const unsigned int maxEnergyPoints,
            const unsigned int maxHitPoints,
            const unsigned int meleeAttackDamage,
            const unsigned int rangedAttackDamage,
            const unsigned int armorDamageReduction);
    ClapTrap(const ClapTrap &src);
    ~ClapTrap();

    const std::string &getName() const;

    ClapTrap &operator=(const ClapTrap &rhs);

    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

protected:

    unsigned int _hitPoints;
    unsigned int _energyPoints;
    unsigned int _level;
    std::string _name;
    unsigned int _maxHitPoints;
    unsigned int _maxEnergyPoints;
    std::string _type;
    unsigned int _meleeAttackDamage;
    unsigned int _rangedAttackDamage;
    unsigned int _armorDamageReduction;

};

#endif
