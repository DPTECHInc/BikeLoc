#include <iostream>
#include "func/consult.hpp"
#include "func/create.hpp"
void menu()
{
    int user_choice = 0;
    // Init menu
    std::cout
        << "Merci de choisir parmis les options suivantes: " << std::endl;

    std::cout << "Ajouter un vélo, \n"
              << "Choix: 1" << std::endl;
    std::cout << "Supprimer un vélo, \n"
              << "Choix: 2" << std::endl;
    std::cout << "Consulter tout les vélos, \n"
              << "Choix: 3" << std::endl;
    std::cout << "Choix utilisateur:" << std::endl;
    std::cin >> user_choice;

    switch (user_choice)
    {
    case 1:
        create();
        break;
    case 2:
        std::cout << "Suppresion d'un vélo.." << std::endl;
    case 3:
        consult();
    default:
        break;
    }
}