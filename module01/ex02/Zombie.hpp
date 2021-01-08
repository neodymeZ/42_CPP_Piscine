/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/27 02:28:30 by larosale          #+#    #+#             */
/*   Updated: 2020/12/27 02:51:08 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie {

public:

    Zombie();
    Zombie(std::string name, std::string type);
    ~Zombie();

    void announce();

private:

    std::string _zombieName;
    std::string _zombieType;

};

#endif
