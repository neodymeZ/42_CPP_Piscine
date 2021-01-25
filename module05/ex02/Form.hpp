/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 15:00:59 by larosale          #+#    #+#             */
/*   Updated: 2021/01/23 16:49:17 by larosale         ###   ########.fr       */
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

    class FormNotSignedException : public std::exception {

    public:

        virtual const char *what() const throw();

    };

    Form();
    Form(const std::string &name, const std::string &target,
        unsigned int gts, unsigned int gte);
    Form(const Form &src);
    virtual ~Form();

    Form &operator=(const Form &rhs);

    std::string getName() const;
    std::string getTarget() const;
    bool getSigned() const;
    unsigned int getGradeToSign() const;
    unsigned int getGradeToExec() const;

    void setSigned(bool s);

    void beSigned(const Bureaucrat &bureaucrat);
    void execute(const Bureaucrat &executor) const;
    virtual void formAction() const = 0;

private:

    const std::string _name;
    const std::string _target;
    bool _isSigned;
    const unsigned int _gradeToSign;
    const unsigned int _gradeToExec;

};

std::ostream &operator<<(std::ostream &o,const Form &i);

#endif
