/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 15:00:59 by larosale          #+#    #+#             */
/*   Updated: 2021/01/18 00:12:31 by larosale         ###   ########.fr       */
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

    ClapTrap &operator=(const ClapTrap &rhs);

    std::string getName() const;
    unsigned int getLevel() const;
    unsigned int getHP() const;
    unsigned int getEP() const;

    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

protected:

    unsigned int _hitPoints;
    unsigned int _energyPoints;
    unsigned int _level;
    std::string _name;
    const unsigned int _maxHitPoints;
    const unsigned int _maxEnergyPoints;
    const std::string _type;
    const unsigned int _meleeAttackDamage;
    const unsigned int _rangedAttackDamage;
    const unsigned int _armorDamageReduction;

};

#endif
