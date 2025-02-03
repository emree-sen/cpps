#include "PhoneBook.hpp"
#include <iostream>
#include <cctype>

int main()
{
    PhoneBook phonebook;
    std::string cmd;
    int i = 0;
    int number = 0;
    while (true)
    {
        std::cout << "ADD | SEARCH | EXIT" << std::endl;
        std::getline(std::cin, cmd);
        if (std::cin.eof())
            break;
        if (cmd == "EXIT")
            break;
        else if(cmd == "SEARCH")
        {   
            phonebook.listAll();
            std::cout << "Enter a index number between 1 and 8 = ";
            std::string numberStr;
            std::getline(std::cin, numberStr);
            bool isValidType = true;
            for (std::string::size_type j = 0; j < numberStr.size(); ++j)
            {
                if (!std::isdigit(numberStr[j])) 
                {
                    isValidType = false;
                    break;
                }
            }
            if (isValidType) 
            {
                number = 0;
                for (std::string::size_type j = 0; j < numberStr.size(); ++j)
                {
                    number = number * 10 + (numberStr[j] - '0');
                }
            } 
            else 
            {
                number = 0;
            }
            if(number < 1 || number > 8 || number > i)
            {
                std::cout << "Invalid input" << std::endl;
                continue;
            }
            else
                phonebook.search(number-1);
        }
        else if(cmd == "ADD")
        {
            phonebook.add(&i);
        }
        cmd.clear();
    }
}