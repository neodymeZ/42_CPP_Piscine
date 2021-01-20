/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cow.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 15:00:59 by larosale          #+#    #+#             */
/*   Updated: 2021/01/20 20:09:20 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COW_HPP
# define COW_HPP

# include <iostream>
# include "Victim.hpp"

class Cow : public Victim {

public:

    Cow();
    Cow(const std::string &name);
    Cow(const Cow &src);
    virtual ~Cow();

    Cow &operator=(const Cow &rhs);

    virtual void getPolymorphed() const;

};

#endif
