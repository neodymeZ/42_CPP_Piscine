/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 15:01:03 by larosale          #+#    #+#             */
/*   Updated: 2021/01/21 19:40:20 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name(""), _grade(1) {

//    std::cout << "Default constructor called" << std::endl;
    return;
}

Bureaucrat::Bureaucrat(const std::string &name, unsigned int grade) :
    _name(name) {

//    std::cout << "Parametric constructor called" << std::endl;
    if (grade < 1)
    {
        throw Bureaucrat::GradeTooHighException();
    }
    else if (grade > 150)
    {
        throw Bureaucrat::GradeTooLowException();
    }
    else
    {
        this->_grade = grade;
    }
    return;
}

Bureaucrat::Bureaucrat(const Bureaucrat &src) :
    _name(src._name), _grade(src._grade){

//    std::cout << "Copy constructor called" << std::endl;
    return;
}

Bureaucrat::~Bureaucrat() {

//    std::cout << "Destructor called" << std::endl;
    return;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &rhs) {

//    std::cout << "Assignment operator called" << std::endl;

    if (this != &rhs)
    {
        this->_grade = rhs._grade;
    }

    return *this;
}

std::string Bureaucrat::getName() const {

    return this->_name;
}

unsigned int Bureaucrat::getGrade() const {

    return this->_grade;
}

void Bureaucrat::incGrade() {

    if (this->_grade - 1 < 1)
    {
        throw Bureaucrat::GradeTooHighException();
    }

    this->_grade -= 1;
    return;
}

void Bureaucrat::decGrade() {

    if (this->_grade + 1 > 150)
    {
        throw Bureaucrat::GradeTooLowException();
    }

    this->_grade += 1;
    return;
}

std::ostream &operator<<(std::ostream &o,const Bureaucrat &i) {

    o << i.getName() << ", bureaucrat grade " << i.getGrade();
    o << std::endl;
    return o;
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {

    return "Resulting grade is too low";
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {

    return "Resulting grade is too high";
}
