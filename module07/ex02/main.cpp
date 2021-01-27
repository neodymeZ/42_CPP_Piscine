/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 16:26:39 by larosale          #+#    #+#             */
/*   Updated: 2021/01/26 18:52:45 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.tpp"

int main() {

    std::cout << "TESTING ARRAY TEMPLATE WITH INTS" << std::endl;
    std::cout << "---------------------------------" << std::endl;

    std::cout << "Creating an empty array. ";
    Array<int> arr1;
    std::cout << "It has: " << arr1.size() << " elements." << std::endl;

    std::cout << "Creating an array with 10 elements and filling it with values.";
    Array<int> arr2(10);
    std::cout << " It has " << arr2.size() << " elements and its contents is: " << std::endl;
    for (unsigned int i = 0; i < arr2.size(); i++)
    {
        arr2[i] = i;
        std::cout << arr2[i] << "\t";
    }
    std::cout << std::endl;

    std::cout << "Creating a new array using copy constructor.";
    Array<int> arr3(arr2);
    std::cout << " It has " << arr3.size() << " elements and its contents is: " << std::endl;
    for (unsigned int i = 0; i < arr3.size(); i++)
    {
        std::cout << arr3[i] << "\t";
    }
    std::cout << std::endl;

    std::cout << "Creating a new array with 5 elements.";
    Array<int> arr4(5);
    std::cout << " It has " << arr4.size() << " elements and its contents is: " << std::endl;
    for (unsigned int i = 0; i < arr4.size(); i++)
    {
        std::cout << arr4[i] << "\t";
    }
    std::cout << std::endl;
    std::cout << "Testing assignment.";
    arr4 = arr2;
    std::cout << " After assignment the array has " << arr4.size();
    std::cout << " elements and its contents is: " << std::endl;
    for (unsigned int i = 0; i < arr4.size(); i++)
    {
        std::cout << arr4[i] << "\t";
    }
    std::cout << std::endl;

    std::cout << "Testing out of bounds access." << std::endl;
    try
    {
        std::cout << "Accessing 100-th element of the array: ";
        std::cout << arr2[100] << " OK.";
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << "\nTESTING ARRAY TEMPLATE WITH STRINGS" << std::endl;
    std::cout << "---------------------------------" << std::endl;

    std::cout << "Creating an empty array. ";
    Array<std::string> arr5;
    std::cout << "It has: " << arr5.size() << " elements." << std::endl;

    std::cout << "Creating an array with 10 elements and filling it with values.";
    Array<std::string> arr6(10);
    std::cout << " It has " << arr6.size() << " elements and its contents is: " << std::endl;
    for (unsigned int i = 0; i < arr6.size(); i++)
    {
        arr6[i] = std::string(i, 'a');
        std::cout << arr6[i] << "\t";
    }
    std::cout << std::endl;

    std::cout << "Creating a new array using copy constructor.";
    Array<std::string> arr7(arr6);
    std::cout << " It has " << arr7.size() << " elements and its contents is: " << std::endl;
    for (unsigned int i = 0; i < arr7.size(); i++)
    {
        std::cout << arr7[i] << "\t";
    }
    std::cout << std::endl;

    std::cout << "Creating a new array with 5 elements.";
    Array<std::string> arr8(5);
    std::cout << " It has " << arr8.size() << " elements and its contents is: " << std::endl;
    for (unsigned int i = 0; i < arr8.size(); i++)
    {
        std::cout << arr8[i] << "\t";
    }
    std::cout << std::endl;
    std::cout << "Testing assignment.";
    arr8 = arr6;
    std::cout << " After assignment the array has " << arr8.size();
    std::cout << " elements and its contents is: " << std::endl;
    for (unsigned int i = 0; i < arr8.size(); i++)
    {
        std::cout << arr8[i] << "\t";
    }
    std::cout << std::endl;

    std::cout << "Testing out of bounds access." << std::endl;
    try
    {
        std::cout << "Accessing 100-th element of the array: ";
        std::cout << arr6[100] << " OK.";
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    return 0;
}
