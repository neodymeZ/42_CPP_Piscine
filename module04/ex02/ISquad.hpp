/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISquad.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 19:13:16 by larosale          #+#    #+#             */
/*   Updated: 2021/01/19 22:12:56 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISQUAD_HPP
# define ISQUAD_HPP

# include "ISpaceMarine.hpp"

class ISquad {

public:

    virtual ~ISquad() {}
    virtual int getCount() const = 0;
    virtual ISpaceMarine *getUnit(int index) const = 0;
    virtual int push(ISpaceMarine *marine) = 0;

};

#endif
