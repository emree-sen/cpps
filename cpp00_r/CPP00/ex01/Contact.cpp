#include "Contact.hpp"

void Contact::setName(std::string name)
{
    this->name = name;
}

void Contact::setSurName(std::string sur_name)
{
    this->surName = sur_name;
}

void Contact::setTelNum(std::string tel_no)
{
    this->telNo = tel_no;
}

void Contact::setNickName(std::string nick_name)
{
    this->nickName = nick_name;
}

void Contact::setDarkSecret(std::string dark_secret)
{
    this->darkSecret = dark_secret;
}

std::string Contact::getName()
{
    return name;
}

std::string Contact::getSurName()
{
    return surName;
}

std::string Contact::getTelNum()
{
    return telNo;
}

std::string Contact::getNickName()
{
    return nickName;
}

std::string Contact::getDarkSecret()
{
    return darkSecret;
}
