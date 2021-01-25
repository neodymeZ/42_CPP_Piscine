/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 15:00:59 by larosale          #+#    #+#             */
/*   Updated: 2021/01/23 19:16:59 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <stdexcept>
# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern {

public:

    class FormNotFoundException : public std::exception {

    public:

        virtual const char *what() const throw();

    };

    Intern();
    Intern(const Intern &src);
    ~Intern();

    Intern &operator=(const Intern &rhs);

    Form *makeForm(const std::string &name, const std::string &target) const;

private:

    Form *_newShrubbery(const std::string &target) const;
    Form *_newRobotomy(const std::string &target) const;
    Form *_newPresidential(const std::string &target) const;

    int _searchForm(const std::string &name) const;

};

#endif
