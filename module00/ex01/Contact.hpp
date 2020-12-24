/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 17:31:08 by larosale          #+#    #+#             */
/*   Updated: 2020/12/23 03:26:22 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

class Contact {

public:

    Contact();
    ~Contact();

    bool        isFilled() const;
    void        incFilled();
    static int  getFilled();

    std::string getField(std::string fieldName) const;
    void        setField(std::string fieldName, std::string fieldValue);

private:

    static int  _filledContacts;

    std::string _firstName;
    std::string _lastName;
    std::string _nickname;
    std::string _login;
    std::string _postalAddress;
    std::string _emailAddress;
    std::string _phoneNumber;
    std::string _birthDate;
    std::string _favMeal;
    std::string _underwearColor;
    std::string _darkestSecret;

};

#endif
