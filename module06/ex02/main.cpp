/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 20:04:30 by larosale          #+#    #+#             */
/*   Updated: 2021/01/25 20:39:24 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *generate(void) {

    if (std::rand() % 3 == 0)
    {
        return new A();
    }
    else if (std::rand() % 3 == 1)
    {
        return new B();
    }
    else
    {
        return new C();
    }
}

void identify_from_pointer(Base *p) {

    A *a = dynamic_cast<A *>(p);
    B *b = dynamic_cast<B *>(p);
    C *c = dynamic_cast<C *>(p);

    if (a && !b && !c)
    {
        std::cout << "A" << std::endl;
    }
    else if (!a && b && !c)
    {
        std::cout << "B" << std::endl;
    }
    else if (!a && !b && c)
    {
        std::cout << "C" << std::endl;
    }

    return;
}

void identify_from_reference(Base &p) {

    try {
        A &a = dynamic_cast<A &>(p);
        std::cout << "A" << std::endl;
        (void)a;
    }
    catch (std::bad_cast &bc) { }

    try {
        B &b = dynamic_cast<B &>(p);
        std::cout << "B" << std::endl;
        (void)b;
    }
    catch (std::bad_cast &bc) { }

    try {
        C &c = dynamic_cast<C &>(p);
        std::cout << "C" << std::endl;
        (void)c;
    }
    catch (std::bad_cast &bc) { }

    return;
}

int main() {

    std::srand(std::time(0));

    Base *base = generate();

    std::cout << "Type, identified by pointer: ";
    identify_from_pointer(base);

    std::cout << "Type, identified by reference: ";
    identify_from_reference(*base);

    delete base;

    return 0;
}
