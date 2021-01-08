/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 01:17:18 by larosale          #+#    #+#             */
/*   Updated: 2021/01/09 01:20:48 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

int main(int argc, char **argv)
{
    if (argc == 3)
    {
        Human human;
        human.action(argv[1], argv[2]);
    }
    else
        return 1;
    return 0;
}
