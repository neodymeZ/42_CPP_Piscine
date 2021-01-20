/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pig.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 15:00:59 by larosale          #+#    #+#             */
/*   Updated: 2021/01/20 20:09:38 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIG_HPP
# define PIG_HPP

# include <iostream>
# include "Victim.hpp"

class Pig : public Victim {

public:

    Pig();
    Pig(const std::string &name);
    Pig(const Pig &src);
    virtual ~Pig();

    Pig &operator=(const Pig &rhs);

    virtual void getPolymorphed() const;

};

#endif
