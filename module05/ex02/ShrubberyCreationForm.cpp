/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 15:01:03 by larosale          #+#    #+#             */
/*   Updated: 2021/01/23 02:50:30 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() :
    Form("Shrubbery creation form", "", 145, 137) {

//    std::cout << "Default constructor called" << std::endl;
    return;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) :
    Form("Shrubbery creation form", target, 145, 137) {

//    std::cout << "Parametric constructor called" << std::endl;
    return;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) :
    Form(src.getName(), src.getTarget(),
    src.getGradeToSign(), src.getGradeToExec()) {

//    std::cout << "Copy constructor called" << std::endl;
    return;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {

//    std::cout << "Destructor called" << std::endl;
    return;
}

ShrubberyCreationForm &ShrubberyCreationForm::
    operator=(const ShrubberyCreationForm &rhs) {

//    std::cout << "Assignment operator called" << std::endl;

    if (this != &rhs)
    {
        (this->setSigned)(rhs.getSigned());
    }

    return *this;
}

void ShrubberyCreationForm::formAction() const {

    std::ofstream ofs(this->getTarget() + "_shrubbery");
    if (!ofs)
    {
        std::cerr << "Error: could not open file: '" << this->getTarget();
        std::cerr << "_shrubbery'" << std::endl;
        return;
    }

    ofs << "   *    *  ()   *   *" << std::endl;
    ofs << "*        * /\\         *" << std::endl;
    ofs << "      *   /i\\\\    *  *" << std::endl;
    ofs << "    *     o/\\\\  *      *" << std::endl;
    ofs << " *       ///\\i\\    *" << std::endl;
    ofs << "     *   /*/o\\\\  *    *" << std::endl;
    ofs << "   *    /i//\\*\\      *" << std::endl;
    ofs << "        /o/*\\\\i\\   *" << std::endl;
    ofs << "  *    //i//o\\\\\\\\     *" << std::endl;
    ofs << "    * /*////\\\\\\\\i\\*" << std::endl;
    ofs << " *    //o//i\\\\*\\\\\\   *" << std::endl;
    ofs << "   * /i///*/\\\\\\\\\\o\\   *" << std::endl;
    ofs << "  *    *   ||     * jrei" << std::endl;

    ofs.close();

    return;
}
