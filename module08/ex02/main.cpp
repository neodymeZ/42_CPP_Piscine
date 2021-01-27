/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 16:48:19 by larosale          #+#    #+#             */
/*   Updated: 2021/01/27 19:45:50 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main() {

    std::cout << "Tests from the subject:" << std::endl;
    std::cout << "-----------------------\n" << std::endl;

    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);

    std::cout << mstack.top() << std::endl;

    mstack.pop();

    std::cout << mstack.size() << std::endl;

    mstack.push(3);
    mstack.push(5);
    mstack.push(737); //[...]
    mstack.push(0);

    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();

    ++it;
    --it;

    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }

    std::stack<int> s(mstack);

    std::cout << "\nAdditional tests:" << std::endl;
    std::cout << "-----------------------\n" << std::endl;

    std::cout << "Creating a stack from underlying container ";
    std::cout << "of ints: { 442, 24, 425, 5333, 1212 }" << std::endl;
    int arr[] = { 442, 24, 425, 5333, 1212 };
    std::list<int> lst(arr, arr + sizeof(arr) / sizeof(int));
    std::deque<int> dq(arr, arr + sizeof(arr) / sizeof(int));
    MutantStack<int> stack(lst);
    std::stack<int> stdstack(dq);

    std::cout << "Printing the stack contents:\n";
    MutantStack<int>::iterator it2 = stack.begin();
    MutantStack<int>::iterator ite2 = stack.end();
    while (it2 != ite2)
    {
        std::cout << *it2 << std::endl;
        ++it2;
    }
    std::cout << std::endl;

    std::cout << "Is stack empty: " << stack.empty() << ". It has: ";
    std::cout << stack.size() << " elements." << std::endl;

    std::cout << "Popping a value from stack, then pushing 42 there. ";
    stack.pop();
    stdstack.pop();
    stack.push(42);
    stdstack.push(42);
    std::cout << "Now the stack contents is:\n";
    MutantStack<int>::iterator it3 = stack.begin();
    while (it3 != ite2)
    {
        std::cout << *it3 << std::endl;
        ++it3;
    }
    std::cout << std::endl;

    std::cout << "Top of the standard stack: " << stdstack.top() << std::endl;

    return 0;

}
