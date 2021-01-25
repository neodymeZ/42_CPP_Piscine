/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 18:14:50 by larosale          #+#    #+#             */
/*   Updated: 2021/01/23 17:12:14 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// clang++ -Wall -Wextra -Werror -std=c++98 *.cpp

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

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

/*
static void testForm(std::string name, unsigned int gts, unsigned int gte) {

    try
    {
        std::cout << "\nCreating form" << std::endl;
        Form test(name, "", gts, gte);
        std::cout << test << std::endl;

        std::cout << "Test passed sucessfully" << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << "Test failed with exception: " << e.what() << std::endl;
    }

    return;

}
*/

int main() {

    std::srand(std::time(0));

    std::cout << "\n----------------------\n";
    std::cout << "TESTING BUREAUCRATS" << std::endl;

    testBureaucrat("John", 1);
    testBureaucrat("Jack", 150);
    testBureaucrat("Bob", 0);
    testBureaucrat("Dave", 200);
    testBureaucrat("Bill", 42);

    std::cout << "\n----------------------\n";
    std::cout << "TESTING FORMS" << std::endl;


    std::cout << std::endl;

    Bureaucrat john("John", 100);
    std::cout << john;
    Bureaucrat president("Trump", 3);
    std::cout << president << std::endl;

    ShrubberyCreationForm shrubbery("home");
    RobotomyRequestForm robotomy("car");
    PresidentialPardonForm presidential("innocent");
    PresidentialPardonForm presidential2("felon");
    std::cout << shrubbery << robotomy << presidential << presidential2;
    std::cout << std::endl;

    john.signForm(shrubbery);
    john.signForm(robotomy);
    president.signForm(robotomy);
    president.signForm(presidential);
    std::cout << std::endl;
    std::cout << shrubbery << robotomy << presidential << presidential2;
    std::cout << std::endl;

    john.executeForm(shrubbery);
    president.executeForm(robotomy);
    president.executeForm(presidential);
    president.executeForm(presidential2);
    john.executeForm(presidential);

    return 0;
}
