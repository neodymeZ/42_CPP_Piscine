/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 15:00:59 by larosale          #+#    #+#             */
/*   Updated: 2021/01/18 03:56:47 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap {

public:

    NinjaTrap();
    NinjaTrap(const std::string &name);
    NinjaTrap(const NinjaTrap &src);
    ~NinjaTrap();

    NinjaTrap &operator=(const NinjaTrap &rhs);

    void rangedAttack(const std::string &target) const;
    void meleeAttack(const std::string &target) const;

    void ninjaShoebox(const ClapTrap &clapTrap);
    void ninjaShoebox(const FragTrap &clapTrap);
    void ninjaShoebox(const ScavTrap &clapTrap);
    void ninjaShoebox(const NinjaTrap &clapTrap);

};

#endif
