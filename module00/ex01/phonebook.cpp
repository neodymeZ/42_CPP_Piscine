/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 15:03:45 by larosale          #+#    #+#             */
/*   Updated: 2020/12/23 23:47:31 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.h"

void printWelcome()
{
    std::cout << "****************************************" << std::endl;
    std::cout << "Welcome to the crappy awesome phonebook!" << std::endl;
    std::cout << "****************************************" << std::endl;
    std::cout << std::endl;
    std::cout << "Supported commands: " << std::endl;
    std::cout << "ADD - create a contact;" << std::endl;
    std::cout << "SEARCH - find and show contact information;" << std::endl;
    std::cout << "EXIT - exit the program." << std::endl << std::endl;
    std::cout << "Currently maximum " << MAX_CONTACTS << " contacts supported.";
    std::cout << std::endl << std::endl;
}

void addContact(Contact *contactPtr)
{
    std::cout << std::endl;
    std::cout << "Please enter the new contact information" << std::endl;

    fillContactField(contactPtr, "first name", true, 1);
    fillContactField(contactPtr, "last name", true, 2);
    fillContactField(contactPtr, "nickname", false, 3);
    fillContactField(contactPtr, "login", true, 4);
    fillContactField(contactPtr, "postal address", true, 5);
    fillContactField(contactPtr, "email address", true, 6);
    fillContactField(contactPtr, "phone number", true, 7);
    fillContactField(contactPtr, "birthday date", true, 8);
    fillContactField(contactPtr, "favorite meal", false, 9);
    fillContactField(contactPtr, "underwear color", false, 10);
    fillContactField(contactPtr, "darkest secret", false, 11);

    std::cout << "Contact added" << std::endl << std::endl;

    contactPtr->incFilled();

    return;
}

void printContact(Contact *contactPtr)
{
    int index;

    index = getContactIndex();
    printContactField(&contactPtr[index - 1]);

    return;
}

void searchContact(Contact *contactsPtr)
{
    int num = 0;

    if (!Contact::getFilled()) {
        std::cout << "List of contacts is empty" << std::endl << std::endl;
        return ;
    }

    std::cout << std::endl;
    std::cout << "List of contacts" << std::endl;
    std::cout << "-----------------------------------------------------";
    std::cout << std::endl;
    std::cout << "| " << std::setw(COL_WIDTH) << std::right << "Index";
    std::cout << " | " << std::setw(COL_WIDTH) << std::right << "First name";
    std::cout << " | " << std::setw(COL_WIDTH) << std::right << "Last name";
    std::cout << " | " << std::setw(COL_WIDTH) << std::right << "Nickname";
    std::cout << " |" << std::endl;
    std::cout << "-----------------------------------------------------";
    std::cout << std::endl;

    while (num < Contact::getFilled()) {
        printTableEntry(&contactsPtr[num], num + 1);
        num++;
    }

    std::cout << "-----------------------------------------------------";
    std::cout << std::endl << std::endl;

    printContact(contactsPtr);
    return ;
}

int main()
{
    std::string command;
    Contact     contacts[MAX_CONTACTS];

    printWelcome();
    while (true) {
        std::cout << "Please enter a command (ADD/SEARCH/EXIT): ";
        std::getline(std::cin, command);
        if (command == "EXIT") {
            break;
        } else if (command == "ADD") {
            if (Contact::getFilled() < MAX_CONTACTS) {
                addContact(&contacts[Contact::getFilled()]);
            } else {
                std::cout << "Maximum number of contacts reached (";
                std::cout << Contact::getFilled() << ")" << std::endl;
            }
        } else if (command == "SEARCH") {
            searchContact(contacts);
        } else if (command == "") {
            continue;
        } else {
            std::cout << "Invalid command" << std::endl << std::endl;
        }
    }
    return 0;
}
