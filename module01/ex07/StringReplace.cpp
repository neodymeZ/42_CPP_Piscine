/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StringReplace.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 22:41:07 by larosale          #+#    #+#             */
/*   Updated: 2021/01/09 00:29:09 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "StringReplace.hpp"

StringReplace::StringReplace
    (const char *filename, const char *strToReplace,
    const char *strToReplaceWith)
    : _inFilename(filename), _strToReplace(strToReplace),
    _strToReplaceWith(strToReplaceWith)
{
    this->_outFilename = this->_inFilename + ".replace";
}

StringReplace::~StringReplace()
{
}

bool StringReplace::doReplacement() const
{
    if (!this->_checkArgs())
        return false;

    std::ifstream input(this->_inFilename);
    std::ofstream output(this->_outFilename);

    if (!input)
    {
        std::cerr << "Error: could not open file: '" << this->_inFilename;
        std::cerr << "'" << std::endl;
        return false;
    }
    if (!output)
    {
        std::cerr << "Error: could not open file: '" << this->_outFilename;
        std::cerr << "'" << std::endl;
        return false;
    }

    this->_stringReplace(input, output);

    input.close();
    output.close();

    return true;
}

void StringReplace::_stringReplace(std::ifstream &input,
    std::ofstream &output) const
{
    std::string line;
    size_t replacementLen = (this->_strToReplace).length();

    while (std::getline(input, line))
    {
        while (true)
        {
            size_t pos = line.find(this->_strToReplace);
            if (pos != std::string::npos)
                line.replace(pos, replacementLen, this->_strToReplaceWith);
            else
                break;
        }

        output << line << '\n';
    }
}

bool StringReplace::_checkArgs() const
{
    if ((this->_inFilename).length() == 0
        || (this->_strToReplace).length() == 0
        || (this->_strToReplaceWith).length() == 0)
    {
        std::cerr << "Error: empty argument" << std::endl;
        return false;
    }
    return true;
}
