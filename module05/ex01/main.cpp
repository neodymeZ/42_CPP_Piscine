/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 18:14:50 by larosale          #+#    #+#             */
/*   Updated: 2021/01/22 03:20:41 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// clang++ -Wall -Wextra -Werror -std=c++98 *.cpp

#include "Bureaucrat.hpp"
#include "Form.hpp"

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

static void testForm(std::string name, unsigned int gts, unsigned int gte) {

    try
    {
        std::cout << "\nCreating form" << std::endl;
        Form test(name, gts, gte);
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

    std::cout << "\n----------------------\n";
    std::cout << "TESTING BUREAUCRATS" << std::endl;

    testBureaucrat("John", 1);
    testBureaucrat("Jack", 150);
    testBureaucrat("Bob", 0);
    testBureaucrat("Dave", 200);
    testBureaucrat("Bill", 42);

    std::cout << "\n----------------------\n";
    std::cout << "TESTING FORMS" << std::endl;

    testForm("N-115", 1, 150);
    testForm("A-122", 42, 42);
    testForm("B-12", 0, 100);
    testForm("C-11", 12, 190);

    std::cout << std::endl;

    Bureaucrat john("John", 42);
    std::cout << john << std::endl;

    Form form1("A-42", 42, 100);
    Form form2("B-15", 15, 100);

    john.signForm(form1);
    john.signForm(form2);

    std::cout << std::endl << form1 << form2;

    return 0;
}
