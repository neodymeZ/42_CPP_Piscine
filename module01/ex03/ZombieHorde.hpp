/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/28 20:23:28 by larosale          #+#    #+#             */
/*   Updated: 2020/12/29 02:59:59 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include <iostream>
# include "Zombie.hpp"

class ZombieHorde {

public:

    ZombieHorde(int N);
    ~ZombieHorde();

    void announce();

private:

    Zombie *_horde;
    int _count;

    std::string _randString(int len);

};

#endif
