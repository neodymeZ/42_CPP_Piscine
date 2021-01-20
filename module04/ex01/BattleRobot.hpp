/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BattleRobot.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 15:00:59 by larosale          #+#    #+#             */
/*   Updated: 2021/01/21 00:54:48 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BATTLEROBOT_HPP
# define BATTLEROBOT_HPP

# include <iostream>
# include "Enemy.hpp"

class BattleRobot : public Enemy {

public:

    BattleRobot();
    BattleRobot(const BattleRobot &src);
    ~BattleRobot();

    BattleRobot &operator=(const BattleRobot &rhs);

};

#endif
