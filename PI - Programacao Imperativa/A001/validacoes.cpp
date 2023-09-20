/* PROTÓTIPOS DAS FUNÇÕES */

bool validarCPF(string);

/* FUNÇÕES */


bool validarCPF(string cpf)
{
    //verificar se todos os caracteres são dígitos
    for (int i = 0; i < cpf.length(); i++) 
    {
       if (!isdigit(cpf[i])) {
           return false;
       }
    }
    
    //verificar se possui 11 caracteres
    return cpf.length() != 11 ? false : true;
}