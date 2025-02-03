#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>

class Contact
{
    private:
        std::string name;
        std::string darkSecret;
        std::string surName;
        std::string telNo;
        std::string nickName;

    public:
        void setName(std::string name);
        void setSurName(std::string sur_name);
        void setTelNum(std::string tel_no);
        void setNickName(std::string nick_name);
        void setDarkSecret(std::string dark_secret);

        std::string getName();
        std::string getSurName();
        std::string getTelNum();
        std::string getNickName();
        std::string getDarkSecret();
};

#endif