#pragma once
#include <iostream>
#include <string>
#include "Customer.hpp"

class Bike
{
    std::string id;
    std::string name;
    std::string brand;
    std::string model;
    std::string type;
    int size;
    std::string color;
    float price;
    bool is_rent;
    Customer *rent_to;

public:
    Bike(std::string id,

         std::string name,
         std::string brand,
         std::string model,
         std::string type,
         int size,
         std::string color,
         float price)
    {
        this->name = name;
        this->brand = brand;
        this->model = model;
        this->type = type;
        this->size = size;
        this->color = color;
        this->price = price;
        this->is_rent = false;
        this->rent_to = NULL;
    }

    void prompt_data()
    {
        std::cout << "Nom: " << name << std::endl;
        std::cout << "Marque: " << brand << std::endl;
        std::cout << "Modele: " << model << std::endl;
        std::cout << "Taille: " << size << std::endl;
        std::cout << "Couleur: " << color << std::endl;
        std::cout << "price: " << price << "€" << std::endl;
        std::cout << "Loue: : " << is_rent << std::endl;
    }
};