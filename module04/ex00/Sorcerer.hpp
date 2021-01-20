/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 15:00:59 by larosale          #+#    #+#             */
/*   Updated: 2021/01/19 01:59:45 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <iostream>
# include "Victim.hpp"

class Sorcerer {

public:

    Sorcerer(const std::string &name, const std::string &title);
    Sorcerer(const Sorcerer &src);
    ~Sorcerer();

    Sorcerer &operator=(const Sorcerer &rhs);

    const std::string &getName() const;
    const std::string &getTitle() const;

    void polymorph(const Victim &victim) const;

private:

    std::string _name;
    std::string _title;

    Sorcerer();

};

std::ostream &operator<<(std::ostream &o, const Sorcerer &i);

#endif
