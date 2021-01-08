/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 00:39:57 by larosale          #+#    #+#             */
/*   Updated: 2021/01/09 01:37:20 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

void Human::meleeAttack(std::string const & target)
{
    std::cout << "Human makes a melee attack on the '";
    std::cout << target << "'" << std::endl;
}

void Human::rangedAttack(std::string const & target)
{
    std::cout << "Human makes a ranged attack on the '";
    std::cout << target << "'" << std::endl;
}

void Human::intimidatingShout(std::string const & target)
{
    std::cout << "Human shouts something intimidating to the '";
    std::cout << target << "'" << std::endl;
}

void Human::action(std::string const & action_name, std::string const & target)
{
    std::string actionNames[] =
    {
        "meleeAttack",
        "rangedAttack",
        "intimidatingShout"
    };

    void (Human::*actions[])(std::string const & target) =
    {
        &Human::meleeAttack,
        &Human::rangedAttack,
        &Human::intimidatingShout
    };

    for (int i = 0; i < (int)(sizeof(actionNames)/sizeof(actionNames[0])); i++)
    {
        if (actionNames[i] == action_name)
        {
            (this->*(actions[i]))(target);
            break;
        }
    }
}
