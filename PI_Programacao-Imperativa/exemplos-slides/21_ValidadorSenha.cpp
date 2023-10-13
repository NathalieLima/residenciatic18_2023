#include <iostream>

using namespace std;

class Senha
{
    public: 
        static bool validadorSenha(string senha) {

            //verificar 8 caracteres
            if (senha.length() < 8) { return false; }
            
            bool flag = false;
            unsigned int i = 0;

            while ( i < senha.length() && !flag )
            {
                char caractere = senha[i];

                string validar;
                if ( isdigit(caractere)) { 
                    validar[0] = '1'; 
                }
                else if ( isupper(caractere)) { 
                    validar[1] = '1'; 
                }
                else if ( islower(caractere)) { 
                    validar[2] = '1'; 
                }
                
                if ( validar == "111" )
                {
                    flag = true;
                }

                i++;
            }

            return true;
        }
    
};

int main (void)
{
    cout << Senha::validadorSenha("1235nN78");
}