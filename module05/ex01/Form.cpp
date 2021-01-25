/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 15:01:03 by larosale          #+#    #+#             */
/*   Updated: 2021/01/22 03:13:29 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() :
    _name(""), _isSigned(false), _gradeToSign(1), _gradeToExec(1) {

//    std::cout << "Default constructor called" << std::endl;
    return;
}

Form::Form(const std::string &name, unsigned int gts, unsigned int gte) :
    _name(name), _isSigned(false), _gradeToSign(gts), _gradeToExec(gte) {

//    std::cout << "Parametric constructor called" << std::endl;
    if (gts < 1 || gte < 1)
    {
        throw Form::GradeTooHighException();
    }
    else if (gts > 150 || gte > 150)
    {
        throw Form::GradeTooLowException();
    }

    return;
}

Form::Form(const Form &src) :
    _name(src._name),
    _isSigned(src._isSigned),
    _gradeToSign(src._gradeToSign),
    _gradeToExec(src._gradeToExec) {

//    std::cout << "Copy constructor called" << std::endl;
    return;
}

Form::~Form() {

//    std::cout << "Destructor called" << std::endl;
    return;
}

Form &Form::operator=(const Form &rhs) {

//    std::cout << "Assignment operator called" << std::endl;

    if (this != &rhs)
    {
        this->_isSigned = rhs._isSigned;
    }

    return *this;
}

std::ostream &operator<<(std::ostream &o,const Form &i) {

    o << "Form name: " << i.getName();

    if (i.getSigned())
    {
        o << ", signed. ";
    }
    else
    {
        o << ", not signed. ";
    }

    o << "Grade to sign: " << i.getGradeToSign();
    o << ", grade to execute: " << i.getGradeToExec();
    o << std::endl;

    return o;
}

std::string Form::getName() const {

    return this->_name;
}
bool Form::getSigned() const {

    return this->_isSigned;
}
unsigned int Form::getGradeToSign() const {

    return this->_gradeToSign;
}
unsigned int Form::getGradeToExec() const {

    return this->_gradeToExec;
}

void Form::beSigned(const Bureaucrat &bureaucrat) {

    if (this->_gradeToSign >= bureaucrat.getGrade())
    {
        this->_isSigned = true;
    }
    else
    {
        throw Form::GradeTooLowException();
    }
    return;
}

const char *Form::GradeTooLowException::what() const throw() {

    return "Grade is too low";
}

const char *Form::GradeTooHighException::what() const throw() {

    return "Grade is too high";
}
