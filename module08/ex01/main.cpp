/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 01:57:25 by larosale          #+#    #+#             */
/*   Updated: 2021/01/27 14:04:13 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main() {

    std::srand(std::time(0));

    std::cout << "Test from the subject" << std::endl;
    std::cout << "---------------------" << std::endl;

    Span sp = Span(5);

    sp.addNumber(5);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);

    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

    std::cout << "\nMore tests" << std::endl;
    std::cout << "---------------------" << std::endl;

    std::cout << "Testing a large container:" << std::endl;

    Span test(100000);
    int array[100000];

    for (int i = 0; i < 100000; i++)
    {
        array[i] = std::rand() % 20;
    }

    try
    {
        test.addRange(array, array + sizeof(array) / sizeof(int));

        std::cout << "Container size is: " << test.getSetSize() << std::endl;

        std::cout << "Shortest span: " << test.shortestSpan() << std::endl;
        std::cout << "Longest span: " << test.longestSpan() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << "\nTesting exceptions:" << std::endl;

    Span test2(1);

    try
    {
        test2.addNumber(54);
        test2.addNumber(48);
    }
    catch (std::exception &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "The container has the size: " << test2.getSetSize();
    std::cout << " and has the following elements: " << test2;

    try
    {
        test2.shortestSpan();
        test2.longestSpan();
    }
    catch (std::exception &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    return 0;

}
