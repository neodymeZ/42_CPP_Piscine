/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 14:59:22 by larosale          #+#    #+#             */
/*   Updated: 2021/01/26 16:13:38 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>
#include <cctype>

template<typename T>
void iter(T *ptr, size_t len, void (*f)(T &)) {

    for (size_t i = 0; i < len; i++)
    {
        f(ptr[i]);
    }

    return;
}

template<typename T>
void printArr(T &el) {

    std::cout << el << "\t";
    return;
}

template<typename T>
void addItself(T &el) {

    el = el + el;
    return;
}

#endif
