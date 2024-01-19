#include "Solution2.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <ostream>

// Don't forget to enable the exercise in the SudentConfiguration.h file !
#include "StudentConfiguration.h"
#ifdef COMPILE_EXERCICE_2

float Solution2::GetBalance(const std::string& accountName)
{
	std::ifstream account("x64\\Release\\" + accountName);

    float balance = 0.f;

    if (account.is_open()) {
        std::string ligne;
        while (std::getline(account, ligne)) {
            std::istringstream ss(ligne);
            std::string operation;
            float amount;

            ss >> operation >> amount;

            if (operation == "DEPOSIT") {
                balance += amount;
            }
            else if (operation == "WITHDRAW") {
                balance -= amount;
            }
            else {
                std::cerr << "Opération non reconnue : " << operation << std::endl;
            }
        }

        account.close();

        return balance;
    }
    
    throw std::exception("Compte non valide.");

	return -1.0f;
}

#endif
