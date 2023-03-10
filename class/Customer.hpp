#pragma once
#include <string>

class Customer
{
    std::string name;
    std::string address;
    std::string tel;
    std::string mail;

public:
    Customer(
        std::string name,
        std::string address,
        std::string tel,
        std::string mail)
    {
        this->name = name;
        this->address = address;
        this->tel = tel;
        this->mail = mail;
    }
};