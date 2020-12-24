/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/23 00:50:41 by larosale          #+#    #+#             */
/*   Updated: 2020/12/23 19:51:38 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <iostream>
# include <iomanip>
# include "Contact.hpp"

# define MAX_CONTACTS 8
# define COL_WIDTH 10
# define NUM_FIELDS 11

void fillContactField(Contact *contactPtr, const char *fieldName,
    bool isRequired, int index);
void printTableEntry(Contact *contactPtr, int index);
int getContactIndex();
void printContactField(Contact *contactPtr);

#endif
