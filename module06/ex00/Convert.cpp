/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 15:01:03 by larosale          #+#    #+#             */
/*   Updated: 2021/01/25 15:38:48 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert() :
    _literal(""),
    _type(ERR),
    _charRes(0),
    _intRes(0),
    _floatRes(0.0f),
    _doubleRes(0.0),
    _charNonDisp(false),
    _charImpossible(false),
    _intImpossible(false),
    _floatImpossible(false) {

//    std::cout << "Default constructor called" << std::endl;
    return;
}

Convert::Convert(const std::string &literal) :
    _literal(literal),
    _type(ERR),
    _charRes(0),
    _intRes(0),
    _floatRes(0.0f),
    _doubleRes(0.0),
    _charNonDisp(false),
    _charImpossible(false),
    _intImpossible(false),
    _floatImpossible(false) {

//    std::cout << "Parametric constructor called" << std::endl;
    return;
}

Convert::Convert(const Convert &src) :
    _literal(src._literal),
    _type(src._type),
    _charRes(src._charRes),
    _intRes(src._intRes),
    _floatRes(src._floatRes),
    _doubleRes(src._doubleRes),
    _charNonDisp(src._charNonDisp),
    _charImpossible(src._charImpossible),
    _intImpossible(src._intImpossible),
    _floatImpossible(src._floatImpossible) {

//    std::cout << "Copy constructor called" << std::endl;
    return;
}

Convert::~Convert() {

//    std::cout << "Destructor called" << std::endl;
    return;
}

Convert &Convert::operator=(const Convert &rhs) {

//    std::cout << "Assignment operator called" << std::endl;

    if (this != &rhs)
    {
        this->_literal = rhs._literal;
        this->_type = rhs._type;
        this->_charRes = rhs._charRes;
        this->_intRes = rhs._intRes;
        this->_floatRes = rhs._floatRes;
        this->_doubleRes = rhs._doubleRes;
        this->_charNonDisp = rhs._charNonDisp;
        this->_charImpossible = rhs._charImpossible;
        this->_intImpossible = rhs._intImpossible;
        this->_floatImpossible = rhs._floatImpossible;
    }

    return *this;
}

void Convert::makeConversion() {

    this->_type = this->_detectType();

    switch(this->_type) {
        case CHAR :
            this->_convertFromChar();
            break;
        case INT :
            this->_convertFromInt();
            break;
        case FLOAT :
            this->_convertFromFloat();
            break;
        case DOUBLE :
            this->_convertFromDouble();
            break;
        default :
            ;
    }
    this->_printMessage();
    return;
}

void Convert::_convertFromChar() {

    this->_charRes = this->_literal[0];

    this->_setFlags(CHAR);

    this->_intRes = static_cast<int>(this->_charRes);
    this->_floatRes = static_cast<float>(this->_charRes);
    this->_doubleRes = static_cast<double>(this->_charRes);

    return;
}

void Convert::_convertFromInt() {

    long result = std::strtol((this->_literal).c_str(), NULL, 10);
    if (result > INT_MAX || result < INT_MIN)
    {
        throw Convert::InvalidLiteralException();
    }

    this->_intRes = static_cast<int>(result);

    this->_setFlags(INT);

    this->_charRes = static_cast<char>(this->_intRes);
    this->_floatRes = static_cast<float>(this->_intRes);
    this->_doubleRes = static_cast<double>(this->_intRes);

    return;
}

void Convert::_convertFromFloat() {

    double result = std::strtod((this->_literal).c_str(), NULL);
    this->_floatRes = static_cast<float>(result);

    if (!this->_isInfOrNan(FLOAT)
        && ((result > 0 && result > FLT_MAX)
            || (result < 0 && result < -FLT_MIN)))
    {
        throw Convert::InvalidLiteralException();
    }

    this->_setFlags(FLOAT);

    this->_charRes = static_cast<char>(this->_floatRes);
    this->_intRes = static_cast<int>(this->_floatRes);
    this->_doubleRes = static_cast<double>(this->_floatRes);

    return;
}

void Convert::_convertFromDouble() {

    double result = std::strtod((this->_literal).c_str(), NULL);
    this->_doubleRes = static_cast<double>(result);

    if (!this->_isInfOrNan(DOUBLE)
        && (result == HUGE_VAL || result == -HUGE_VAL
            || result == DBL_MIN || result == -DBL_MIN))
    {
        throw Convert::InvalidLiteralException();
    }

    this->_setFlags(DOUBLE);

    this->_charRes = static_cast<char>(this->_doubleRes);
    this->_intRes = static_cast<int>(this->_doubleRes);
    this->_floatRes = static_cast<float>(this->_doubleRes);

    return;
}

Convert::types Convert::_detectType() const {

    std::size_t literalLen = _literal.length();

    // Check, if the literal is of type "char"
    if ((literalLen == 3 && _literal[0] == '\'' && _literal[2] == '\'')
        || (literalLen == 1 && (_literal[0] < '0' || _literal[0] > '9')))
    {
        return CHAR;
    }
    // If literal equals to these strings, then we can determine type right away
    else if (_literal == "-inf" || _literal == "+inf" || _literal == "nan")
    {
        return DOUBLE;
    }
    else if (_literal == "-inff" || _literal == "+inff" || _literal == "nanf")
    {
        return FLOAT;
    }

    // Find symbols that cannot be in literal of supported types
    std::size_t found = _literal.find_first_not_of("0123456789.f", 1);
    // If these symbols were not found, and if the first symbol is digit or sign
    if (found == std::string::npos
        && ((_literal[0] >= '0' && _literal[0] <= '9')
            || _literal[0] == '-' || _literal[0] == '+'))
    {
        std::size_t foundF = _literal.find_first_of('f');
        std::size_t foundDot = _literal.find_first_of('.');
        std::size_t foundLastDot = _literal.find_last_of('.');

        if (foundDot == 0 || foundDot == literalLen - 1
            || foundF < literalLen - 1 || foundDot != foundLastDot)
        {
            throw Convert::InvalidLiteralException();
            return ERR;
        }
        else if (foundDot == std::string::npos && foundF == std::string::npos)
        {
            return INT;
        }
        else if (foundDot != std::string::npos && foundF != std::string::npos)
        {
            return FLOAT;
        }
        else if (foundDot != std::string::npos)
        {
            return DOUBLE;
        }
    }

    throw Convert::InvalidLiteralException();
    return ERR;
}

void Convert::_printMessage() const {

    std::cout << "char: ";
    if (this->_charNonDisp)
    {
        std::cout << "non displayable";
    }
    else if (this->_charImpossible)
    {
        std::cout << "impossible";
    }
    else
    {
        std::cout << "'" << this->_charRes << "'";
    }
    std::cout << std::endl;

    std::cout << "int: ";
    if (this->_intImpossible)
    {
        std::cout << "impossible";
    }
    else
    {
        std::cout << this->_intRes;
    }
    std::cout << std::endl;

    std::cout << "float: " << std::showpoint << std::setprecision(1);
    std::cout << std::fixed;
    if (this->_floatImpossible)
    {
        std::cout << "impossible";
    }
    else
    {
        std::cout << this->_floatRes << "f";
    }
    std::cout << std::endl;

    std::cout << "double: " << std::showpoint << std::setprecision(1);
    std::cout << std::fixed << this->_doubleRes << std::endl;

    return;

}

void Convert::_setFlags(Convert::types type) {

    if (type == CHAR)
    {
        if (this->_charRes < 32 || this->_charRes > 126)
        {
            this->_charNonDisp = true;
        }
    }

    else if (type == INT)
    {
        if (this->_intRes < 0 || this->_intRes > 255)
        {
            this->_charImpossible = true;
        }
        else if (this->_intRes < 32 || this->_intRes > 126)
        {
            this->_charNonDisp = true;
        }
    }

    else if (type == FLOAT)
    {
        if (this->_floatRes < 0 || this->_floatRes > 255
            || std::isnan(this->_floatRes))
        {
            this->_charImpossible = true;
        }
        else if (this->_floatRes < 32 || this->_floatRes > 126)
        {
            this->_charNonDisp = true;
        }

        if (this->_floatRes < INT_MIN || this->_floatRes > INT_MAX
            || std::isnan(this->_floatRes))
        {
            this->_intImpossible = true;
        }
    }

    else if (type == DOUBLE)
    {
        if (this->_doubleRes < 0 || this->_doubleRes > 255
            || std::isnan(this->_doubleRes))
        {
            this->_charImpossible = true;
        }
        else if (this->_doubleRes < 32 || this->_doubleRes > 126)
        {
            this->_charNonDisp = true;
        }

        if (this->_doubleRes < INT_MIN || this->_doubleRes > INT_MAX
            || std::isnan(this->_doubleRes))
        {
            this->_intImpossible = true;
        }

        if ((this->_doubleRes > 0 && this->_doubleRes > FLT_MAX)
            || (this->_doubleRes < 0 && this->_doubleRes < -FLT_MAX))
        {
            this->_floatImpossible = true;
        }
    }

    return;
}

bool    Convert::_isInfOrNan(Convert::types type) const {

    if (type == FLOAT
        && (this->_floatRes == std::numeric_limits<float>::infinity()
		      || this->_floatRes == -std::numeric_limits<float>::infinity()
		      || std::isnan(this->_floatRes)))
    {
        return true;
    }

    if (type == DOUBLE
        && (this->_doubleRes == std::numeric_limits<double>::infinity()
		      || this->_doubleRes == -std::numeric_limits<double>::infinity()
		      || std::isnan(this->_doubleRes)))
    {
        return true;
    }

    return false;
}

const char *Convert::InvalidLiteralException::what() const throw() {

    return "invalid literal";
}
