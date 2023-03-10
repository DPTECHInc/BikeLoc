#include <iostream>
#include <fstream>

void consult()
{
    // Consult CSV
    std::fstream velo("C:/Users/Dayle/Desktop/Dev/Formation Dev&DevOps/c/link/BikeLoc/func/datas/velo.csv", std::ios::in | std::ios::binary);
    if (velo.is_open())
    {
        // std::cout << "file ok" << std::endl;
        std::string ligne;
        while (getline(velo, ligne))
        {
            std::cout << ligne << std::endl;
        }
    }
    else
    {
        std::cout << "Impossible d'ouvrir le fichier" << std::endl;
    }
    velo.close();
};