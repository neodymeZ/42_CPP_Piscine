/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 15:00:59 by larosale          #+#    #+#             */
/*   Updated: 2021/01/19 00:21:12 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>

class FragTrap {

public:

    FragTrap();
    FragTrap(const std::string &name);
    FragTrap(const FragTrap &src);
    ~FragTrap();

    FragTrap &operator=(const FragTrap &rhs);

    void rangedAttack(const std::string &target) const;
    void meleeAttack(const std::string &target) const;
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    void vaulthunter_dot_exe(const std::string &target);

private:

    unsigned int _hitPoints;
    unsigned int _maxHitPoints;
    unsigned int _energyPoints;
    unsigned int _maxEnergyPoints;
    unsigned int _level;
    std::string _name;
    unsigned int _meleeAttackDamage;
    unsigned int _rangedAttackDamage;
    unsigned int _armorDamageReduction;

};

#endif
