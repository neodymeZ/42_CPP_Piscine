/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 15:01:03 by larosale          #+#    #+#             */
/*   Updated: 2021/01/23 03:23:19 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() :
    Form("Presidential pardon form", "", 25, 5) {

//    std::cout << "Default constructor called" << std::endl;
    return;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) :
    Form("Presidential pardon form", target, 25, 5) {

//    std::cout << "Parametric constructor called" << std::endl;
    return;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src) :
    Form(src.getName(), src.getTarget(),
    src.getGradeToSign(), src.getGradeToExec()) {

//    std::cout << "Copy constructor called" << std::endl;
    return;
}

PresidentialPardonForm::~PresidentialPardonForm() {

//    std::cout << "Destructor called" << std::endl;
    return;
}

PresidentialPardonForm &PresidentialPardonForm::
    operator=(const PresidentialPardonForm &rhs) {

//    std::cout << "Assignment operator called" << std::endl;

    if (this != &rhs)
    {
        (this->setSigned)(rhs.getSigned());
    }

    return *this;
}

void PresidentialPardonForm::formAction() const {

    std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox";
    std::cout << std::endl;

    return;
}
