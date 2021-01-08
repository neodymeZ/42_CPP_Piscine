/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/29 03:43:25 by larosale          #+#    #+#             */
/*   Updated: 2020/12/29 04:14:01 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

# include <iostream>
# include "Brain.hpp"

class Human {

public:

    Human();
    ~Human();

    std::string identify() const;
    const Brain &getBrain() const;

private:

    const Brain _brain;

};

#endif
