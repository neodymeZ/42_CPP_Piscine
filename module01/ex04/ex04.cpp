/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/29 03:07:59 by larosale          #+#    #+#             */
/*   Updated: 2020/12/29 03:12:39 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string &strRef = str;
    std::string *strPtr = &str;

    std::cout << "The initial string: " << str << std::endl;
    std::cout << "String via pointer: " << *strPtr << std::endl;
    std::cout << "String via reference: " << strRef << std::endl;

    return 0;
}
