/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 15:00:59 by larosale          #+#    #+#             */
/*   Updated: 2021/01/21 00:36:00 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

# include <iostream>
# include "AWeapon.hpp"

class PlasmaRifle : public AWeapon {

public:

    PlasmaRifle();
    PlasmaRifle(const PlasmaRifle &src);
    virtual ~PlasmaRifle();

    PlasmaRifle &operator=(const PlasmaRifle &rhs);

    virtual void attack() const;

};

#endif
