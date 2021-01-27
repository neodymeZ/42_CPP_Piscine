/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 14:41:38 by larosale          #+#    #+#             */
/*   Updated: 2021/01/26 19:30:59 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template<typename T>
void swap(T &x, T &y) {

    T temp = x;
    x = y;
    y = temp;
    return ;
}

template<typename T>
T min(T &x, T &y) {

    return (x < y ? x : y);
}

template<typename T>
T max(T &x, T &y) {

    return (x > y ? x : y);
}

#endif
