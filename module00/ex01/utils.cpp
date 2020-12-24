/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 21:32:57 by larosale          #+#    #+#             */
/*   Updated: 2020/12/23 20:26:13 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.h"

void fillContactField(Contact *contactPtr, const char *fieldName,
    bool isRequired, int index)
{
    std::string fieldValue;

    do {
        std::cout << "(" << index << "/" << NUM_FIELDS << ") ";
        std::cout << fieldName;
        isRequired ? std::cout << " (required): " : std::cout << ": ";
        std::getline(std::cin, fieldValue);
    } while (isRequired && fieldValue.size() == 0);
    contactPtr->setField(fieldName, fieldValue);
    return ;
}

static std::string makeTableStr(std::string str, Contact *contactPtr)
{
    std::string output;

    output = contactPtr->getField(str);

    if (output.size() > COL_WIDTH) {
        output.resize(COL_WIDTH - 1);
        output.push_back('.');
    } else if (output.size() == 0) {
        output = "<blank>";
    }

    return output;
}

void printTableEntry(Contact *contactPtr, int index)
{
    std::cout << "| " << std::setw(10) << std::right << index;
    std::cout << " | " << std::setw(10) << std::right;
    std::cout << makeTableStr("first name", contactPtr);
    std::cout << " | " << std::setw(10) << std::right;
    std::cout << makeTableStr("last name", contactPtr);
    std::cout << " | " << std::setw(10) << std::right;
    std::cout << makeTableStr("nickname", contactPtr) << " |";
    std::cout << std::endl;

    return;
}

int getContactIndex()
{
    int index = 0;

    std::cout << "Please enter an index of the contact to display: ";

    while (!(std::cin >> index) || index < 1 || index > Contact::getFilled()) {
        std::cout << "A number from 1 to " << Contact::getFilled();
        std::cout << " must be entered" << std::endl;
        // Clear input stream
        std::cin.clear();
        // Discard previous input
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Please enter an index of the contact to display: ";
    }
    std::cout << std::endl;
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    return index;
}

static std::string makeContactStr(std::string str, Contact *contactPtr)
{
    std::string output;

    output = contactPtr->getField(str);

    if (output.size() == 0) {
        output = "<blank>";
    }

    return output;
}

void printContactField(Contact *contactPtr)
{
    std::cout << std::setw(17) << std::left << "first name: ";
    std::cout << makeContactStr("first name", contactPtr) << std::endl;
    std::cout << std::setw(17) << std::left << "last name: ";
    std::cout << makeContactStr("last name", contactPtr) << std::endl;
    std::cout << std::setw(17) << std::left << "nickname: ";
    std::cout << makeContactStr("nickname", contactPtr) << std::endl;
    std::cout << std::setw(17) << std::left << "login: ";
    std::cout << makeContactStr("login", contactPtr) << std::endl;
    std::cout << std::setw(17) << std::left << "postal address: ";
    std::cout << makeContactStr("postal address", contactPtr) << std::endl;
    std::cout << std::setw(17) << std::left << "email address: ";
    std::cout << makeContactStr("email address", contactPtr) << std::endl;
    std::cout << std::setw(17) << std::left << "phone number: ";
    std::cout << makeContactStr("phone number", contactPtr) << std::endl;
    std::cout << std::setw(17) << std::left << "birthday date: ";
    std::cout << makeContactStr("birthday date", contactPtr) << std::endl;
    std::cout << std::setw(17) << std::left << "favorite meal: ";
    std::cout << makeContactStr("favorite meal", contactPtr) << std::endl;
    std::cout << std::setw(17) << std::left << "underwear color: ";
    std::cout << makeContactStr("underwear color", contactPtr) << std::endl;
    std::cout << std::setw(17) << std::left << "darkest secret: ";
    std::cout << makeContactStr("darkest secret", contactPtr) << std::endl;
    std::cout << "Command completed successfully" << std::endl << std::endl;

    return;
}
