/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 15:00:59 by larosale          #+#    #+#             */
/*   Updated: 2021/01/21 00:36:29 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

# include <iostream>
# include "Enemy.hpp"

class SuperMutant : public Enemy {

public:

    SuperMutant();
    SuperMutant(const SuperMutant &src);
    virtual ~SuperMutant();

    SuperMutant &operator=(const SuperMutant &rhs);

    virtual void takeDamage(int damage);

};

#endif
