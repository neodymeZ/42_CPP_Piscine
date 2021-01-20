/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 15:00:59 by larosale          #+#    #+#             */
/*   Updated: 2021/01/19 00:28:56 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>

class ScavTrap {

public:

    ScavTrap();
    ScavTrap(const std::string &name);
    ScavTrap(const ScavTrap &src);
    ~ScavTrap();

    ScavTrap &operator=(const ScavTrap &rhs);

    void rangedAttack(const std::string &target) const;
    void meleeAttack(const std::string &target) const;
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    void challengeNewcomer();

private:

    unsigned int _hitPoints;
    unsigned int _maxHitPoints;
    unsigned int _energyPoints;
    unsigned int _maxEnergyPoints;
    unsigned int _level;
    std::string _name;
    std::string _type;
    unsigned int _meleeAttackDamage;
    unsigned int _rangedAttackDamage;
    unsigned int _armorDamageReduction;

};

#endif
