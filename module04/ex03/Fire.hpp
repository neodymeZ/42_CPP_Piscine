/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fire.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 03:25:43 by larosale          #+#    #+#             */
/*   Updated: 2021/01/20 18:50:35 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIRE_HPP
# define FIRE_HPP

# include "AMateria.hpp"

class Fire : public AMateria {

public:

    Fire();
    Fire(const Fire &src);
    ~Fire();

    Fire &operator=(const Fire &rhs);

    virtual Fire *clone() const;
    virtual void use(ICharacter &target);

};

#endif
