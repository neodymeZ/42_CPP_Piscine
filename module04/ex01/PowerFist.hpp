/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 15:00:59 by larosale          #+#    #+#             */
/*   Updated: 2021/01/21 00:36:04 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PowerFist_HPP
# define PowerFist_HPP

# include <iostream>
# include "AWeapon.hpp"

class PowerFist : public AWeapon {

public:

    PowerFist();
    PowerFist(const PowerFist &src);
    virtual ~PowerFist();

    PowerFist &operator=(const PowerFist &rhs);

    virtual void attack() const;

};

#endif
