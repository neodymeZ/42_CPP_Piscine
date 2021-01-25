/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 18:14:50 by larosale          #+#    #+#             */
/*   Updated: 2021/01/21 18:41:34 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// clang++ -Wall -Wextra -Werror -std=c++98 *.cpp

#include "Bureaucrat.hpp"

static void testBureaucrat(std::string name, unsigned int grade) {

    try
    {
        std::cout << "\nCreating bureaucrat" << std::endl;
        Bureaucrat test(name, grade);
        std::cout << test << std::endl;

        std::cout << "Increasing grade" << std::endl;
        test.incGrade();
        std::cout << test << std::endl;
        std::cout << "Decreasing grade twice" << std::endl;
        test.decGrade();
        test.decGrade();
        std::cout << test << std::endl;
        std::cout << "Test passed sucessfully" << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << "Test failed with exception: " << e.what() << std::endl;
    }

    return;
}

int main() {

    testBureaucrat("John", 1);
    testBureaucrat("Jack", 150);
    testBureaucrat("Bob", 0);
    testBureaucrat("Dave", 200);
    testBureaucrat("Bill", 42);

    return 0;
}
