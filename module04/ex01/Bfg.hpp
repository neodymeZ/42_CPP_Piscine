/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bfg.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 15:00:59 by larosale          #+#    #+#             */
/*   Updated: 2021/01/21 00:55:01 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BFG_HPP
# define BFG_HPP

# include <iostream>
# include "AWeapon.hpp"

class Bfg : public AWeapon {

public:

    Bfg();
    Bfg(const Bfg &src);
    virtual ~Bfg();

    Bfg &operator=(const Bfg &rhs);

    virtual void attack() const;

};

#endif
