/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 15:01:03 by larosale          #+#    #+#             */
/*   Updated: 2021/01/23 19:28:55 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {

//    std::cout << "Default constructor called" << std::endl;
    return;
}

Intern::Intern(const Intern &src) {

//    std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return;
}

Intern::~Intern() {

//    std::cout << "Destructor called" << std::endl;
    return;
}

Intern &Intern::operator=(const Intern &rhs) {

//    std::cout << "Assignment operator called" << std::endl;

    if (this != &rhs) { }

    return *this;
}

int Intern::_searchForm(const std::string &name) const
{
    std::string formNames[] = {
        "shrubbery creation",
        "robotomy request",
        "presidential pardon"
    };

    for (int i = 0; i < 3; i++)
    {
        if (formNames[i] == name)
            return i;
    }

    throw Intern::FormNotFoundException();
    return -1;
}

Form *Intern::makeForm(const std::string &name, const std::string &target)
    const {

    int i = 0;

    Form *(Intern::*actions[])(const std::string &) const =
    {
        &Intern::_newShrubbery,
        &Intern::_newRobotomy,
        &Intern::_newPresidential
    };

    try
    {
        i = _searchForm(name);
    }
    catch (std::exception &e)
    {
        std::cout << "An error occurred when creating the form '";
        std::cout << name << "' on target '" << target << "': ";
        std::cout << e.what() << std::endl;
        return NULL;
    }

    return (this->*(actions[i]))(target);
}

Form *Intern::_newShrubbery(const std::string &target) const {

    return new ShrubberyCreationForm(target);
}

Form *Intern::_newRobotomy(const std::string &target) const {

    return new RobotomyRequestForm(target);
}

Form *Intern::_newPresidential(const std::string &target) const {

    return new PresidentialPardonForm(target);
}

const char *Intern::FormNotFoundException::what() const throw() {

    return "Form not found";
}
