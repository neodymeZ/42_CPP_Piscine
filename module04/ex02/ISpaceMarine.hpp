/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISpaceMarine.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 15:00:59 by larosale          #+#    #+#             */
/*   Updated: 2021/01/19 21:26:46 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISPACEMARINE_HPP
# define ISPACEMARINE_HPP

class ISpaceMarine {

public:

    virtual ~ISpaceMarine() {}
    virtual ISpaceMarine *clone() const = 0;
    virtual void battleCry() const = 0;
    virtual void rangedAttack() const = 0;
    virtual void meleeAttack() const = 0;

};

#endif
