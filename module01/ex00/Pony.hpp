/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/27 01:49:37 by larosale          #+#    #+#             */
/*   Updated: 2020/12/30 02:02:25 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>

class Pony {

public:

    Pony();
    Pony(std::string name, std::string color);
    ~Pony();

    void speak() const;
    std::string getName() const;
    std::string getColor() const;

private:

    std::string _ponyName;
    std::string _ponyColor;

};

#endif
