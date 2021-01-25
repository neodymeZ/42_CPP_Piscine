/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 15:01:03 by larosale          #+#    #+#             */
/*   Updated: 2021/01/23 03:24:10 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() :
    Form("Robotomy request form", "", 72, 45) {

//    std::cout << "Default constructor called" << std::endl;
    return;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) :
    Form("Robotomy request form", target, 72, 45) {

//    std::cout << "Parametric constructor called" << std::endl;
    return;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) :
    Form(src.getName(), src.getTarget(),
    src.getGradeToSign(), src.getGradeToExec()) {

//    std::cout << "Copy constructor called" << std::endl;
    return;
}

RobotomyRequestForm::~RobotomyRequestForm() {

//    std::cout << "Destructor called" << std::endl;
    return;
}

RobotomyRequestForm &RobotomyRequestForm::
    operator=(const RobotomyRequestForm &rhs) {

//    std::cout << "Assignment operator called" << std::endl;

    if (this != &rhs)
    {
        (this->setSigned)(rhs.getSigned());
    }

    return *this;
}

void RobotomyRequestForm::formAction() const {

    std::cout << "* drilling noise *" << std::endl;

    if (std::rand() % 2)
    {
        std::cout << this->getTarget() << " has been robotomized sucessfully.";
    }
    else
    {
        std::cout << "Failed to robotomize " << this->getTarget();
    }

    std::cout << std::endl;

    return;
}
