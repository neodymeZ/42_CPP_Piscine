/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/27 02:28:30 by larosale          #+#    #+#             */
/*   Updated: 2020/12/29 02:59:02 by larosale         ###   ########.fr       */
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
    
    std::string _randString(int len);

};

#endif
