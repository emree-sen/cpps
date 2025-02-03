#include "PhoneBook.hpp"
#include <iomanip>
#include <iostream>

std::string PhoneBook::resizer(std::string input)
{
    if (input.length() > 10)
    {
        return input.substr(0, 9) + ".";
    }
    return input;
}

bool PhoneBook::containsNonPrintable(const std::string& str)
{
    for(size_t i = 0; i < str.length(); i++)
    {
        if (!std::isprint(str[i]))
            return true;
    }
    return false;
}

void PhoneBook::add(int *index)
{
    std::string firstName;
    std::string lastName;
    std::string nickName;
    std::string telNum;
    std::string darkSecret;

    std::cout << "Enter first name: ";
    std::getline(std::cin, firstName);
    if (firstName.empty() || containsNonPrintable(firstName))
    {
        std::cout << "First name cannot be empty or contain non-printable characters" << std::endl;
        std::cin.clear();
        return;
    }

    std::cout << "Enter last name: ";
    std::getline(std::cin, lastName);
    if (lastName.empty() || containsNonPrintable(lastName))
    {
        std::cout << "Last name cannot be empty or contain non-printable characters" << std::endl;
        std::cin.clear();
        return;
    }

    std::cout << "Enter nickname: ";
    std::getline(std::cin, nickName);
    if (nickName.empty() || containsNonPrintable(nickName))
    {
        std::cout << "Nickname cannot be empty or contain non-printable characters" << std::endl;
        std::cin.clear();
        return;
    }

    std::cout << "Enter phone number: ";
    std::getline(std::cin, telNum);
    if (telNum.empty() || containsNonPrintable(telNum))
    {
        std::cout << "Phone number cannot be empty or contain non-printable characters" << std::endl;
        std::cin.clear();
        return;
    }

    std::cout << "Enter dark secret: ";
    std::getline(std::cin, darkSecret);
    if (darkSecret.empty() || containsNonPrintable(darkSecret))
    {
        std::cout << "Dark secret cannot be empty or contain non-printable characters" << std::endl;
        std::cin.clear();
        return;
    }

    if (*index > 7)
        *index = 0;

    contacts[*index].setName(firstName);
    contacts[*index].setSurName(lastName);
    contacts[*index].setNickName(nickName);
    contacts[*index].setTelNum(telNum);
    contacts[*index].setDarkSecret(darkSecret);

    *index += 1;
    std::cout << "Contact added successfully!" << std::endl;
}

void PhoneBook::listAll()
{
    std::cout << "     Index|First Name| Last Name|  Nickname" << std::endl;
    for (int i = 0; i < 8; i++)
    {
        std::cout << std::setw(10) << i + 1 << "|";
        std::cout << std::setw(10) << resizer(contacts[i].getName()) << "|";
        std::cout << std::setw(10) << resizer(contacts[i].getSurName()) << "|";
        std::cout << std::setw(10) << resizer(contacts[i].getNickName()) << std::endl;
    }
}

void PhoneBook::search(int index)
{
    std::cout << "First Name: " << contacts[index].getName() << std::endl;
    std::cout << "Last Name: " << contacts[index].getSurName() << std::endl;
    std::cout << "Nickname: " << contacts[index].getNickName() << std::endl;
    std::cout << "Phone Number: " << contacts[index].getTelNum() << std::endl;
    std::cout << "Darkest Secret: " << contacts[index].getDarkSecret() << std::endl;
}