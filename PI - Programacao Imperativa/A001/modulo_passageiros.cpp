/* STRUCTS */

struct Passageiro {
    string cpf;
    string nome;
    int data_nascimento;
    int num_autorizacao;
};

/* PROTÓTIPOS DAS FUNÇÕES */

void exibirMenuOpcoesPassageiro(void);
void inserirPassageiro();

/* FUNÇÕES */

void exibirMenuOpcoesPassageiro(void) 
{
    cout << "MENU DE OPÇÕES - Digite um número" << endl <<
    "1. Incluir. " << endl <<
    "2. Excluir " << endl <<
    "3. Alterar (apenas por CPF) " << endl <<
    "4. Listar " << endl <<
    "5. Localizar (por CPF) " << endl <<
    "0. Sair. " << endl <<
    "Número: " << endl;
}


void inserirPassageiro() {
    Passageiro pessoa;
    
    cout << "Insira os dados do passageiro: ";

    cout << "CPF: ";
    cin >> pessoa.cpf;

    cout << "Nome: ";
    cin >> pessoa.nome;

    cout << "Data de nascimento: ";
    cin >> pessoa.data_nascimento;
    //verificar se é valido
    cout << "Número de autorização: "; //se for 0, n é de menor
    cin >> pessoa.num_autorizacao;

    cout << pessoa.cpf << pessoa.nome << pessoa.data_nascimento << pessoa.num_autorizacao;
}