/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 15:00:59 by larosale          #+#    #+#             */
/*   Updated: 2021/01/25 15:00:12 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>
# include <iomanip>
# include <stdexcept>
# include <string>
# include <cstddef>
# include <climits>
# include <cfloat>
# include <cmath>
# include <cstdlib>

class Convert {

public:

    enum types {ERR, CHAR, INT, FLOAT, DOUBLE};

    class InvalidLiteralException : public std::exception {

    public:

        virtual const char *what() const throw();

    };

    Convert(const std::string &literal);
    Convert(const Convert &src);
    ~Convert();

    Convert &operator=(const Convert &rhs);

    void makeConversion();

private:

    std::string _literal;
    types _type;
    char _charRes;
    int _intRes;
    float _floatRes;
    double _doubleRes;
    bool _charNonDisp;
    bool _charImpossible;
    bool _intImpossible;
    bool _floatImpossible;

    Convert();

    types _detectType() const;
    bool _isInfOrNan(types type) const;

    void _convertFromChar();
    void _convertFromInt();
    void _convertFromFloat();
    void _convertFromDouble();

    void _setFlags(types type);

    void _printMessage() const;

};

#endif
