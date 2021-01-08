/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/27 01:49:32 by larosale          #+#    #+#             */
/*   Updated: 2020/12/27 02:21:34 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void ponyOnTheStack()
{
    Pony pony("Ivan", "black");

    pony.speak();

    return;
}

void ponyOnTheHeap()
{
    Pony *pony = new Pony("Marta", "white");

    pony->speak();

    delete pony;

    return;
}

int main()
{
    std::cout << "Testing pony on the stack" << std::endl;
    ponyOnTheStack();

    std::cout << "Testing pony on the heap" << std::endl;
    ponyOnTheHeap();

    return 0;
}
