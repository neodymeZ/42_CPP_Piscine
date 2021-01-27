/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 01:22:32 by larosale          #+#    #+#             */
/*   Updated: 2021/01/27 01:42:50 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <list>
#include <set>

#include "easyfind.hpp"

int main() {

    int array[] = { 5, 8, 89, 94, 157 };

    std::cout << "Testing easyfind with vectors" << std::endl;
    std::vector<int> vector(array, array + sizeof(array) / sizeof(int) );

    std::cout << "The contents of vector are: ";
    for (std::vector<int>::iterator it = vector.begin(); it != vector.end(); ++it)
    {
        std::cout << *it << "  ";
    }
    std::cout << std::endl;

    try
    {
        std::cout << "Finding existing value (89): " << easyfind(vector, 89) << std::endl;
        std::cout << "Finding nonexistent value (100): " << easyfind(vector, 100) << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << "\nTesting easyfind with lists" << std::endl;
    std::list<int> list(array, array + sizeof(array) / sizeof(int) );

    std::cout << "The contents of list are: ";
    for (std::list<int>::iterator it = list.begin(); it != list.end(); ++it)
    {
        std::cout << *it << "  ";
    }
    std::cout << std::endl;

    try
    {
        std::cout << "Finding existing value (89): " << easyfind(list, 89) << std::endl;
        std::cout << "Finding nonexistent value (100): " << easyfind(list, 100) << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    return 0;
}
