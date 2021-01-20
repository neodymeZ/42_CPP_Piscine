/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Air.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 03:25:43 by larosale          #+#    #+#             */
/*   Updated: 2021/01/20 19:04:28 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AIR_HPP
# define AIR_HPP

# include "AMateria.hpp"

class Air : public AMateria {

public:

    Air();
    Air(const Air &src);
    ~Air();

    Air &operator=(const Air &rhs);

    virtual Air *clone() const;
    virtual void use(ICharacter &target);

};

#endif
