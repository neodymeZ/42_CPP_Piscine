/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 15:57:11 by larosale          #+#    #+#             */
/*   Updated: 2021/01/26 19:45:10 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

class Awesome {

public:
    Awesome( void ) : _n( 42 ) { return; }
    int get( void ) const { return this->_n; }

private:
    int _n;

};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) {

    o << rhs.get();
    return o;
}

template< typename T >
void print( T & x ) { std::cout << x << std::endl; return; }

int main() {

    std::srand(std::time(0));
    // Create arrays
    char *charArr = new char[10];
    int *intArr = new int[10];
    float *floatArr = new float[10];
    std::string *stringArr = new std::string[10];

    // Fill arrays with values
    for (int i = 0; i < 10; i++)
    {
        int rnd = std::rand();
        charArr[i] = rnd % 10 + 33;
        intArr[i] = rnd % 5;
        floatArr[i] = 0.1 * i + rnd % 42;
        stringArr[i] = std::string(rnd % 5 + 1, 'a');
    }

    // Print arrays using iter function
    std::cout << "Char array has the following elements:" << std::endl;
    iter<char>(charArr, 10, printArr<char>);
    std::cout << std::endl;
    std::cout << "Int array has the following elements:" << std::endl;
    iter<int>(intArr, 10, printArr<int>);
    std::cout << std::endl;
    std::cout << "Float array has the following elements:" << std::endl;
    iter<float>(floatArr, 10, printArr<float>);
    std::cout << std::endl;
    std::cout << "String array has the following elements:" << std::endl;
    iter<std::string>(stringArr, 10, printArr<std::string>);
    std::cout << std::endl << std::endl;

    // Launch addition function on array

    std::cout << "After addition, char array has the following elements:" << std::endl;
    iter<char>(charArr, 10, addItself<char>);
    iter<char>(charArr, 10, printArr<char>);
    std::cout << std::endl;
    std::cout << "After addition, int array has the following elements:" << std::endl;
    iter<int>(intArr, 10, addItself<int>);
    iter<int>(intArr, 10, printArr<int>);
    std::cout << std::endl;
    std::cout << "After addition, float array has the following elements:" << std::endl;
    iter<float>(floatArr, 10, addItself<float>);
    iter<float>(floatArr, 10, printArr<float>);
    std::cout << std::endl;
    std::cout << "After addition, string array has the following elements:" << std::endl;
    iter<std::string>(stringArr, 10, addItself<std::string>);
    iter<std::string>(stringArr, 10, printArr<std::string>);
    std::cout << std::endl << std::endl;

    delete [] charArr;
    delete [] intArr;
    delete [] floatArr;
    delete [] stringArr;

    // Checklist test
    int tab[] = { 0, 1, 2, 3, 4 }; // <--- I never understood why you can't write int[] tab. Wouldn't that make more sense?
    Awesome tab2[5];

    iter( tab, 5, print );
    iter( tab2, 5, print );

    return 0;
}
