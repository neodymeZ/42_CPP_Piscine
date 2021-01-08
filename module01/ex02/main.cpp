/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/27 03:02:47 by larosale          #+#    #+#             */
/*   Updated: 2020/12/28 20:24:49 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main()
{
    ZombieEvent event;

    event.setZombieType("boss");

    std::cout << "Testing randomChump function (on the stack):" << std::endl;
    event.randomChump();
    event.randomChump();

    event.setZombieType("private");

    std::cout << "\nTesting newZombie function (on the heap):" << std::endl;

    Zombie *zombie = event.newZombie("corpse");
    zombie->announce();
    delete zombie;

    zombie = event.newZombie("carcass");
    zombie->announce();
    delete zombie;

    return 0;
}
