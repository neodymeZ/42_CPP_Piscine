/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 15:00:59 by larosale          #+#    #+#             */
/*   Updated: 2021/01/19 20:17:16 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

# include <iostream>
# include "ISquad.hpp"
# include "ISpaceMarine.hpp"

# define SQUAD_SIZE 2048

class Squad : public ISquad {

public:

    Squad();
    Squad(const Squad &src);
    ~Squad();

    Squad &operator=(const Squad &rhs);

    virtual int getCount() const;
    virtual ISpaceMarine *getUnit(int index) const;
    virtual int push(ISpaceMarine *marine);

private:

    int _count;
    ISpaceMarine *_squad[SQUAD_SIZE];

};

#endif
