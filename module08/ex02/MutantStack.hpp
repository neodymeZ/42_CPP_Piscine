/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 15:00:59 by larosale          #+#    #+#             */
/*   Updated: 2021/01/27 19:45:05 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <list>
# include <stack>
# include <deque>

template<typename T>
class MutantStack : public std::stack<T> {

public:

    MutantStack() : _stack(std::list<T>()) { }
    MutantStack(const std::list<T> &ctnr) : _stack(ctnr) { }
    MutantStack(const MutantStack &src) { *this = src; }
    virtual ~MutantStack() { }

    MutantStack &operator=(const MutantStack &rhs) {

        if (this != &rhs)
            this->_stack = rhs._stack;
        return *this;
    }

    void push(T el) { this->_stack.push_front(el); }
    void pop() { this->_stack.pop_front(); }

    T &top() { return this->_stack.front(); }
    bool empty() { return this->_stack.empty(); }
    size_t size() { return this->_stack.size(); }

	typedef typename std::list<T>::iterator iterator;

	iterator begin() { return _stack.begin(); }
	iterator end() { return _stack.end(); }

private:

    std::list<T> _stack;

};

#endif
