/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 17:30:53 by larosale          #+#    #+#             */
/*   Updated: 2020/12/23 17:05:22 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.h"

int Contact::_filledContacts = 0;

Contact::Contact()
{
//    std::cout << "Constructor called" << std::endl;
}

Contact::~Contact()
{
//    std::cout << "Destructor called" << std::endl;
}

bool Contact::isFilled() const
{
    bool    isFilled = false;

    isFilled = this->_firstName.size() != 0
            && this->_lastName.size() != 0
            && this->_login.size() != 0
            && this->_postalAddress.size() != 0
            && this->_emailAddress.size() != 0
            && this->_phoneNumber.size() != 0
            && this->_birthDate.size() != 0;

    return isFilled;
}

void Contact::incFilled()
{
    Contact::_filledContacts++;
    return;
}

int  Contact::getFilled()
{
    return Contact::_filledContacts;
}

std::string Contact::getField(std::string fieldName) const
{
    std::string result = "";

    if (fieldName == "first name")
        result = this->_firstName;
    else if (fieldName == "last name")
        result = this->_lastName;
    else if (fieldName == "nickname")
        result = this->_nickname;
    else if (fieldName == "login")
        result = this->_login;
    else if (fieldName == "postal address")
        result = this->_postalAddress;
    else if (fieldName == "email address")
        result = this->_emailAddress;
    else if (fieldName == "phone number")
        result = this->_phoneNumber;
    else if (fieldName == "birthday date")
        result = this->_birthDate;
    else if (fieldName == "favorite meal")
        result = this->_favMeal;
    else if (fieldName == "underwear color")
        result = this->_underwearColor;
    else if (fieldName == "darkest secret")
        result = this->_darkestSecret;

    return result;
}

void Contact::setField(std::string fieldName, std::string fieldValue)
{
    if (fieldName == "first name")
        this->_firstName = fieldValue;
    else if (fieldName == "last name")
        this->_lastName = fieldValue;
    else if (fieldName == "nickname")
        this->_nickname = fieldValue;
    else if (fieldName == "login")
        this->_login = fieldValue;
    else if (fieldName == "postal address")
        this->_postalAddress = fieldValue;
    else if (fieldName == "email address")
        this->_emailAddress = fieldValue;
    else if (fieldName == "phone number")
        this->_phoneNumber = fieldValue;
    else if (fieldName == "birthday date")
        this->_birthDate = fieldValue;
    else if (fieldName == "favorite meal")
        this->_favMeal = fieldValue;
    else if (fieldName == "underwear color")
        this->_underwearColor = fieldValue;
    else if (fieldName == "darkest secret")
        this->_darkestSecret = fieldValue;

    return;
}
