#include <iostream>
#include <cctype>
#include <algorithm>
#include <sstream>

std::string toUpperCase(std::string str) {
    //return std::transform(str.begin(), str.end(), str.begin(), ::toupper);
    for (auto &c: str) c = toupper(c);
}



int main (void)
{
    std::string ola = "";
    std::string teste = "";
    std::string retorno = "";

    std::cout << "Método: ";
    std::cin >> ola;
    std::cout << "Retorno: ";
    std::cin >> retorno;

    std::istringstream iss(ola);
    std::istringstream iss2(retorno);
    std::string substring;
    std::string teste4;
    int i = 0;
    
    while (getline(iss, teste, ',') && getline(iss2, teste4, ',')) 
    {
        substring = teste;
        teste[0] = toupper(teste[0]);


        std::cout << "void set" << teste << "(" << teste4 << " _" << substring << ") {" << "\n" <<
        "    this->" << substring << " = _" << substring << "; \n" <<
        "}";

        std::cout << std::endl << std::endl;

        std::cout << teste4 << " get" << teste << "() {" << "\n" <<
        "    return this->" << substring << "; \n" <<
        "}";

        std::cout << std::endl << std::endl;
    }
}


