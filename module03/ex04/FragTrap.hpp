/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 15:00:59 by larosale          #+#    #+#             */
/*   Updated: 2021/01/18 03:10:57 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap {

public:

    FragTrap();
    FragTrap(const std::string &name);
    FragTrap(const FragTrap &src);
    ~FragTrap();

    FragTrap &operator=(const FragTrap &rhs);

    void rangedAttack(const std::string &target) const;
    void meleeAttack(const std::string &target) const;

    void vaulthunter_dot_exe(const std::string &target);

};

#endif
