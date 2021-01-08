/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/27 02:24:43 by larosale          #+#    #+#             */
/*   Updated: 2020/12/27 02:27:29 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void memoryLeak()
{
    std::string *panther = new std::string("String panther");

    std::cout << *panther << std::endl;

    delete panther;
}
