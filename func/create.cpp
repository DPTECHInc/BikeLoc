#include <iostream>
#include <fstream>
#include "../class/Bike.hpp"

void create()
{
    // create new bike
    std::fstream velo("C:/Users/Dayle/Desktop/Dev/Formation Dev&DevOps/c/link/BikeLoc/func/datas/velo.csv", std::ios::app | std::ios::binary);
    if (velo.is_open())
    {
        // base bike init
        std::string name;
        std::string brand;
        std::string model;
        std::string color;
        int size;
        int price;
        bool is_rent;

        // user input
        std::cout << "Nom: " << std::endl;
        std::cin >> name;
        std::cout << "Marque: " << std::endl;
        std::cin >> brand;
        std::cout << "Modele: " << std::endl;
        std::cin >> model;
        std::cout << "Taille: " << std::endl;
        std::cin >> size;
        std::cout << "Couleur: " << std::endl;
        std::cin >> color;
        std::cout << "price: "
                  << "€" << std::endl;
        std::cin >> price;
        std::cout << "Loue: : " << std::endl;

        {
        }
    }
    else
    {
        std::cout << "Impossible d'ouvrir le fichier" << std::endl;
    }
    velo.close();
};