/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 15:00:59 by larosale          #+#    #+#             */
/*   Updated: 2021/01/20 14:11:58 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP

# include <iostream>
# include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine {

public:

    AssaultTerminator();
    AssaultTerminator(const AssaultTerminator &src);
    ~AssaultTerminator();

    AssaultTerminator &operator=(const AssaultTerminator &rhs);

    virtual AssaultTerminator *clone() const;
    virtual void battleCry() const;
    virtual void rangedAttack() const;
    virtual void meleeAttack() const;

};

#endif
