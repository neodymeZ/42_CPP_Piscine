/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StringReplace.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 22:41:50 by larosale          #+#    #+#             */
/*   Updated: 2021/01/09 00:18:16 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRINGREPLACE_HPP
# define STRINGREPLACE_HPP

# include <iostream>
# include <fstream>

class StringReplace {

public:

    StringReplace(const char *filename, const char *strToReplace,
        const char *strToReplaceWith);
    ~StringReplace();

    bool doReplacement() const;

private:

    const std::string _inFilename;
    std::string _outFilename;
    const std::string _strToReplace;
    const std::string _strToReplaceWith;

    bool _checkArgs() const;
    void _stringReplace(std::ifstream &input, std::ofstream &output) const;

};

#endif
