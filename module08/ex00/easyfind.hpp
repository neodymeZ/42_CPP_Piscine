/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 00:14:19 by larosale          #+#    #+#             */
/*   Updated: 2021/01/27 01:40:00 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
# include <iostream>
# include <stdexcept>

template<typename T>
int easyfind(T &cont, int needle) {

    typename T::const_iterator it;

    it = std::find(cont.begin(), cont.end(), needle);

    if (it == cont.end())
    {
        std::cout << "Element not found in container" << std::endl;
        throw std::exception();
    }
    return *it;
}

#endif
