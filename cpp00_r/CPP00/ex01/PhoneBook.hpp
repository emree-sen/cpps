#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
    private:
        Contact contacts[8];
    
    public:
        bool containsNonPrintable(const std::string& str);        
        std::string resizer(std::string input);
        void add(int *index);
        void listAll();
        void search(int index);
};

#endif