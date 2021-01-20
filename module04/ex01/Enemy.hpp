/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 15:00:59 by larosale          #+#    #+#             */
/*   Updated: 2021/01/20 13:26:31 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>

class Enemy {

public:

    Enemy();
    Enemy(int hp, const std::string &type);
    Enemy(const Enemy &src);
    virtual ~Enemy();

    Enemy &operator=(const Enemy &rhs);

    int getHP() const;
    const std::string &getType() const;

    virtual void takeDamage(int damage);

protected:

    int _hp;
    std::string _type;

};

#endif
