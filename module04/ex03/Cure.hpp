/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 03:25:43 by larosale          #+#    #+#             */
/*   Updated: 2021/01/20 18:44:47 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria {

public:

    Cure();
    Cure(const Cure &src);
    ~Cure();

    Cure &operator=(const Cure &rhs);

    virtual Cure *clone() const;
    virtual void use(ICharacter &target);

};

#endif
