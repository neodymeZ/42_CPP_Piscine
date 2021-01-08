/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/29 02:55:40 by larosale          #+#    #+#             */
/*   Updated: 2020/12/29 03:05:10 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieHorde.hpp"

int main(void)
{
    std::cout << "-------------------------------" << std::endl;
    std::cout << "Let's create some zombie horde:" << std::endl;
    ZombieHorde horde(15);
    std::cout << "-------------------------------" << std::endl;
    std::cout << "Now let's destroy it:" << std::endl;
    return (0);
}
