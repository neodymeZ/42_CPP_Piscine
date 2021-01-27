/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 14:49:08 by larosale          #+#    #+#             */
/*   Updated: 2021/01/26 19:26:16 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "whatever.hpp"

class Awesome {

    public:
        Awesome( int n ) : _n( n ) {}
        bool operator==( Awesome const & rhs ) { return (this->_n == rhs._n); }
        bool operator!=( Awesome const & rhs ) { return (this->_n != rhs._n); }
        bool operator>( Awesome const & rhs ) { return (this->_n > rhs._n); }
        bool operator<( Awesome const & rhs ) { return (this->_n < rhs._n); }
        bool operator>=( Awesome const & rhs ) { return (this->_n >= rhs._n); }
        bool operator<=( Awesome const & rhs ) { return (this->_n <= rhs._n); }
        int getN() const { return this->_n; }

    private:
        int _n;
};

int main( void ) {

    int a = 2;
    int b = 3;

    ::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

    std::string c = "chaine1";
    std::string d = "chaine2";

    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

    float e = 1.45f;
    float f = 1.46f;
    ::swap(e, f);
    std::cout << "e = " << e << ", f = " << f << std::endl;
    std::cout << "min( e, f ) = " << ::min( e, f ) << std::endl;
    std::cout << "max( e, f ) = " << ::max( e, f ) << std::endl;

    Awesome g(10);
    Awesome h(15);
    ::swap(g, h);
    std::cout << "g = " << g.getN() << ", h = " << h.getN() << std::endl;
    std::cout << "min( g, h ) = " << ::min( g, h ).getN() << std::endl;
    std::cout << "max( g, h ) = " << ::max( g, h ).getN() << std::endl;

    return 0;

}
