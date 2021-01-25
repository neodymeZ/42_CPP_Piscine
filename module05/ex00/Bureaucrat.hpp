/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 15:00:59 by larosale          #+#    #+#             */
/*   Updated: 2021/01/21 19:39:24 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <stdexcept>

class Bureaucrat {

public:

    class GradeTooLowException : public std::exception {

    public:

        virtual const char *what() const throw();

    };

    class GradeTooHighException : public std::exception {

    public:

        virtual const char *what() const throw();

    };

    Bureaucrat(const std::string &name, unsigned int grade);
    Bureaucrat(const Bureaucrat &src);
    ~Bureaucrat();

    Bureaucrat &operator=(const Bureaucrat &rhs);

    std::string getName() const;
    unsigned int getGrade() const;

    void incGrade();
    void decGrade();

private:

    const std::string _name;
    unsigned int _grade;

    Bureaucrat();

};

std::ostream &operator<<(std::ostream &o,const Bureaucrat &i);

#endif
