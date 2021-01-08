/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/27 02:47:36 by larosale          #+#    #+#             */
/*   Updated: 2020/12/28 20:25:08 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include <iostream>
# include <cstdlib>
# include "Zombie.hpp"

# define NAME_LEN 8

class ZombieEvent {

public:

    ZombieEvent();
    ~ZombieEvent();

    void setZombieType(std::string type);
    Zombie* newZombie(std::string name);
    void randomChump();

private:

    std::string _zombieType;

    std::string _randString(int len);

};

#endif
