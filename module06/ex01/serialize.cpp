/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 15:56:09 by larosale          #+#    #+#             */
/*   Updated: 2021/01/27 14:26:06 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "serialize.h"

static char randomChar() {

    if (std::rand() % 2)
    {
        return ((std::rand() % 26) + 'a');
    }
    else
    {
        return ((std::rand() % 10) + '0');
    }
}

static std::string randomString() {

    std::string str(8, ' ');

    for (int i = 0; i < 8; i++)
    {
        str[i] = randomChar();
    }

    return str;
}

void *serialize(void) {

    char *raw = new char[52];

    *reinterpret_cast<std::string *>(raw) = randomString();
    *reinterpret_cast<int *>(raw + 24) = std::rand();
    *reinterpret_cast<std::string *>(raw + 28) = randomString();

    return (raw);
}

Data *deserialize(void *raw) {

    Data *data = new Data();
    char *result = reinterpret_cast<char *>(raw);

    data->s1 = *reinterpret_cast<std::string *>(result);
    data->n = *reinterpret_cast<int *>(result + 24);
    data->s2 = *reinterpret_cast<std::string *>(result + 28);

    delete [] result;

    return data;
}

int main () {

    std::srand(std::time(0));

    void *raw = serialize();

    Data *data = deserialize(raw);

    std::cout << "First string: " << data->s1 << std::endl;
    std::cout << "Integer: " << data->n << std::endl;
    std::cout << "Second string: " << data->s2 << std::endl;

    delete data;

    return 0;
}
