/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 16:26:44 by larosale          #+#    #+#             */
/*   Updated: 2021/01/26 18:32:46 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP

#include <iostream>
#include <stdexcept>

template<typename T>
class Array {

public:

    Array<T>() : _array(new T[0]()), _size(0) { }
    Array<T>(unsigned int n) : _array(new T[n]()), _size(n) { }

    Array<T>(const Array<T> &src) :
        _array(new T[src._size]()), _size(src._size) {

        for (unsigned int i = 0; i < this->size(); i++)
        this->_array[i] = src._array[i];
    }

    Array<T> &operator=(const Array<T> &rhs) {

        if (this != &rhs)
        {
            delete [] this->_array;
            this->_array = new T[rhs._size]();
            this->_size = rhs._size;

            for (unsigned int i = 0; i < this->size(); i++)
            this->_array[i] = rhs._array[i];
        }
        return *this;
    }

    T &operator[](unsigned int index) {

        if (index > this->_size - 1)
            throw InvalidArrayIndexException();
        return (this->_array[index]);
    };

    ~Array<T>() { delete [] this->_array; }

    unsigned int size() const { return this->_size; }

private:

    T *_array;
    unsigned int _size;

    class InvalidArrayIndexException : public std::exception {

    public:

        virtual const char *what() const throw() {
            return "Invalid array element access (index out of array bounds)";
        }
    };

};

#endif
