/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 03:25:43 by larosale          #+#    #+#             */
/*   Updated: 2021/01/20 18:44:52 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria {

public:

    Ice();
    Ice(const Ice &src);
    ~Ice();

    Ice &operator=(const Ice &rhs);

    virtual Ice *clone() const;
    virtual void use(ICharacter &target);

};

#endif
