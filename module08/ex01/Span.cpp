/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 15:01:03 by larosale          #+#    #+#             */
/*   Updated: 2021/01/27 13:44:44 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _maxNum(0), _set() {

//    std::cout << "Default constructor called" << std::endl;
    return;
}

Span::Span(const unsigned int N) : _maxNum(N), _set() {

//    std::cout << "Parametric constructor called" << std::endl;
    return;
}

Span::Span(const Span &src) : _maxNum(src._maxNum), _set(src._set){

//    std::cout << "Copy constructor called" << std::endl;
    return;
}

Span::~Span() {

//    std::cout << "Destructor called" << std::endl;
    return;
}

Span &Span::operator=(const Span &rhs) {

//    std::cout << "Assignment operator called" << std::endl;

    if (this != &rhs)
    {
        this->_maxNum = rhs._maxNum;
        this->_set = rhs._set;
    }

    return *this;
}

unsigned int Span::getMaxNum() const {

    return this->_maxNum;
}

unsigned int Span::getSetSize() const {

    return (this->_set).size();
}

int Span::getNum(unsigned int index) const {

    std::set<int>::iterator it = (this->_set).begin();
    if (index < this->getSetSize())
    {
        std::advance(it, index);
    }

    return *it;
}

void Span::addNumber(int newNum) {

    if ((this->_set).size() == this->_maxNum)
    {
        throw MaxNumbersReachedException();
    }

    (this->_set).insert(newNum);

    return;
}

void Span::addRange(int *start, int *end)
{
    if ((this->_set).size() + end - start > this->_maxNum)
    {
        throw CannotAddRangeException();
    }

    (this->_set).insert(start, end);

    return;
}

int Span::shortestSpan() const {

    if ((this->_set).size() < 2)
        throw NoSpanToFindException();
        
    std::set<int>::const_iterator it = (this->_set).begin();
    std::set<int>::const_iterator it2 = (this->_set).begin();
    int shortestSpan = *++it2 - *it;

    while (it2 != (this->_set).end())
    {
        if (*it2 - *it < shortestSpan)
        {
            shortestSpan = *it2 - *it;
        }
        it++;
        it2++;
    }

    return shortestSpan;
}

int Span::longestSpan() const {

    if ((this->_set).size() < 2)
        throw NoSpanToFindException();

    int min_el = *std::min_element((this->_set).begin(), (this->_set).end());
    int max_el = *std::max_element((this->_set).begin(), (this->_set).end());

    return (max_el - min_el);
}


const char *Span::MaxNumbersReachedException::what() const throw() {

    return "Maximum amount of stored numbers is reached";
}

const char *Span::CannotAddRangeException::what() const throw() {

    return "Cannot add range, maximum amount of stored numbers will be exceeded";
}

const char *Span::NoSpanToFindException::what() const throw() {

    return "Cannot find span, the container has less than two elements";
}

std::ostream &operator<<(std::ostream &o,const Span &i) {

    for (unsigned int j = 0; j < i.getSetSize(); j++)
    {
        o << i.getNum(j) << " ";
    }
    o << std::endl;

    return o;
}
