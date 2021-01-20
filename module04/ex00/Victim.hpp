/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 15:00:59 by larosale          #+#    #+#             */
/*   Updated: 2021/01/20 20:09:03 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <iostream>

class Victim {

public:

    Victim();
    Victim(const std::string &name);
    Victim(const Victim &src);
    virtual ~Victim();

    Victim &operator=(const Victim &rhs);

    const std::string &getName() const;

    virtual void getPolymorphed() const;

protected:

    std::string _name;

};

std::ostream &operator<<(std::ostream &o, const Victim &i);

#endif
