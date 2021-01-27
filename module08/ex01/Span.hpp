/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 15:00:59 by larosale          #+#    #+#             */
/*   Updated: 2021/01/27 13:45:15 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <set>
# include <iterator>
# include <algorithm>

class Span {

public:

    Span(const unsigned int N);
    Span(const Span &src);
    ~Span();

    Span &operator=(const Span &rhs);

    unsigned int getMaxNum() const;
    unsigned int getSetSize() const;
    int getNum(unsigned int index) const;

    void addNumber(int newNum);
    void addRange(int *start, int *end);

    int shortestSpan() const;
    int longestSpan() const;

private:

    unsigned int _maxNum;
    std::multiset<int> _set;

    Span();

    class MaxNumbersReachedException : public std::exception {

    public:

        virtual const char *what() const throw();

    };

    class CannotAddRangeException : public std::exception {

    public:

        virtual const char *what() const throw();

    };

    class NoSpanToFindException : public std::exception {

    public:

        virtual const char *what() const throw();

    };

};

std::ostream &operator<<(std::ostream &o,const Span &i);

#endif
