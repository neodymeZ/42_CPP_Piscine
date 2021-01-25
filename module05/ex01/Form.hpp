/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 15:00:59 by larosale          #+#    #+#             */
/*   Updated: 2021/01/22 02:53:46 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <stdexcept>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form {

public:

    class GradeTooLowException : public std::exception {

    public:

        virtual const char *what() const throw();

    };

    class GradeTooHighException : public std::exception {

    public:

        virtual const char *what() const throw();

    };

    Form(const std::string &name, unsigned int gts, unsigned int gte);
    Form(const Form &src);
    ~Form();

    Form &operator=(const Form &rhs);

    std::string getName() const;
    bool getSigned() const;
    unsigned int getGradeToSign() const;
    unsigned int getGradeToExec() const;

    void beSigned(const Bureaucrat &bureaucrat);

private:

    const std::string _name;
    bool _isSigned;
    const unsigned int _gradeToSign;
    const unsigned int _gradeToExec;

    Form();
};

std::ostream &operator<<(std::ostream &o,const Form &i);

#endif
