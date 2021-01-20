/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 15:00:59 by larosale          #+#    #+#             */
/*   Updated: 2021/01/20 14:11:33 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP

# include <iostream>
# include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine {

public:

    TacticalMarine();
    TacticalMarine(const TacticalMarine &src);
    ~TacticalMarine();

    TacticalMarine &operator=(const TacticalMarine &rhs);

    virtual TacticalMarine *clone() const;
    virtual void battleCry() const;
    virtual void rangedAttack() const;
    virtual void meleeAttack() const;

};

#endif
