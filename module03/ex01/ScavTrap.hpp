/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 15:00:59 by larosale          #+#    #+#             */
/*   Updated: 2021/01/17 16:45:16 by larosale         ###   ########.fr       */
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

    std::string getName() const;
    unsigned int getLevel() const;
    unsigned int getHP() const;
    unsigned int getEP() const;

    void rangedAttack(const std::string &target) const;
    void meleeAttack(const std::string &target) const;
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    void challengeNewcomer();

private:

    unsigned int _hitPoints;
    const unsigned int _maxHitPoints;
    unsigned int _energyPoints;
    const unsigned int _maxEnergyPoints;
    unsigned int _level;
    std::string _name;
    const std::string _type;
    const unsigned int _meleeAttackDamage;
    const unsigned int _rangedAttackDamage;
    const unsigned int _armorDamageReduction;

};

#endif
