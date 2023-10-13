/*
Exercício extra: Lista de alunos e notas
Implemente uma solução em C++ para que os professores da 
Residencia
gerenciem suas turmas.
Seu programa deve ser capaz de inserir o nome, email e duas 
notas (0 a 100)
para cada discente.
Seu programa deve permitir inserir, alterar ou excluir os 
dados.
Seu programa deve salvar e carregar os dados em arquivo(s).
Seu programa deve implementar as classes: Aluno e BancoDeDados
*/

// email como chave primaria


#include <iostream>
#include <sstream>
#include <vector>
#include <fstream>

using namespace std;

class Aluno 
{
private:
    string nome, email;
    int nota1, nota2;

public:
    Aluno() {
    }

    Aluno(string _nome, string _email, int _nota1, int _nota2) {
        nome = _nome;
        email = _email;
        nota1 = _nota1;
        nota2 = _nota2;
    }

    void setNome(string _nome) {
        nome = _nome;
    }

    void setEmail(string _email) {
        email = _email;
    }

    void setNota1(int _nota1) {
        nota1 = _nota1;
    }

    void setNota2(int _nota2) {
        nota2 = _nota2;
    }

    string getNome() {
        return nome;
    }

    string getEmail() {
        return email;
    }

    int getNota1() {
        return nota1;
    }

    int getNota2() {
        return nota2;
    }
};

class BancoDeDados 
{
private:
    static string juntarDadosAluno(Aluno aluno) {
        return aluno.getNome() + "," + aluno.getEmail() + "," + to_string(aluno.getNota1()) + "," + to_string(aluno.getNota2());
    }

    

public:
    static Aluno transformarStringParaAluno(string texto) {
        istringstream ss(texto);
        string token;
        vector<string> campos;

        while (getline(ss, token, ',')) {
            campos.push_back(token);
        }

        Aluno aluno = { campos[0], campos[1], stoi(campos[2]), stoi(campos[3]) };

        return aluno;
    }



    static void salvarDados(vector<Aluno> dados_alunos, string nome_arquivo)
    {
        ofstream arquivo_saida(nome_arquivo, ios::app);
        //arquivo_saida.seekg(0, ios::end)

        if (arquivo_saida.is_open()) 
        {
            for (unsigned int i = 0; i < dados_alunos.size(); i++) {
                arquivo_saida << BancoDeDados::juntarDadosAluno(dados_alunos[i]) << endl;
            }
            
            arquivo_saida.close();
        } else {
            cout << "Erro ao abrir o arquivo." << endl;
        }
    }

    static vector<string> recuperarDados(string nome_arquivo)
    {
        vector<string> dados;
        ifstream arquivo_entrada;
        arquivo_entrada.open(nome_arquivo, ios_base::in);

        if (arquivo_entrada.is_open())
        {
            string linha;
            

            while (arquivo_entrada.eof() == false) {
                getline(arquivo_entrada, linha);
                dados.push_back(linha);
            }

            arquivo_entrada.close();

            //return arquivo_entrada;
        } else {
            cout << "Erro ao abrir o arquivo." << endl;
        }

        return dados;
    }
};

/* protótipos */

void inserirAluno();
void alterarAluno();
void excluirAluno();

int main (void)
{
    int opcao_usuario;

    cout << "GERENCIAMENTO DE TURMAS - RESIDÊNCIA \n -------------------------" << endl;
    cout << "O que deseja fazer? Escolha uma das opções abaixo " << "\n" 
    << "1. Inserir dados;" << "\n" <<
    "2. Alterar dados;" << "\n" <<
    "3. Excluir dados." << "\n";

    cout << "Sua opção: ";
    cin >> opcao_usuario;

    switch (opcao_usuario) 
    {
        case 1:
            inserirAluno();
            BancoDeDados::recuperarDados("alunos.txt");
            break;

        case 2:
            alterarAluno();
            break;

        case 3:
            excluirAluno();
            break;

        default:
            cout << "Insira um número válido entre 1 e 3.";
            break;
    }


    return 0;
}

void inserirAluno()
{
    string nome, email;
    int nota1, nota2;
    char flag;
    vector<Aluno> alunos;

    do {
        cout << "Nome: ";
        cin.ignore();
        getline(cin, nome);
        
        cout << "Email: ";
        cin >> email;

        cout << "Nota 1: ";
        cin >> nota1;

        cout << "Nota 2: ";
        cin >> nota2;

        Aluno novo_aluno = {nome, email, nota1, nota2};
        alunos.push_back(novo_aluno);

        cout << "Deseja inserir mais alunos (s/n)? ";
        cin >> flag;
    } while (flag != 'n');

    BancoDeDados::salvarDados(alunos, "alunos.txt");

    vector<string> ola = BancoDeDados::recuperarDados("alunos.txt");

}

void alterarAluno() 
{
cout << "Deseja alterar o nome (s/n)?";
    /*cin >> flag;

    if (flag == 's') {
        cout << "Nome: ";
        cin >> nome;
    }

    retornos[indice][0] = nome;*/
}

void excluirAluno() 
{
    string email;

    cout << "Insira o e-mail do aluno a ser excluído: ";
    cin >> email;


    vector<string> ola = BancoDeDados::recuperarDados("alunos.txt");
    vector <Aluno> retornos;
    int j = 0;

    for (string linha: ola)
    {
        istringstream ss(linha);
        string token;
        vector<string> campos;

        while (getline(ss, token, ',')) {
            campos.push_back(token);
            j++;
        }

        

        for (const auto& campo: campos) {
            //cout << campo << endl;
        }

        Aluno aluno = BancoDeDados::transformarStringParaAluno(linha);

        retornos.push_back(aluno);
    }


    int indice = -1;

    for (unsigned int i = 0; i < retornos.size(); i++) {
        if (retornos[i].getEmail() == email) {
            cout << "aqui!";
            indice = i;

        }
    }

    retornos.erase(retornos.begin()+indice);

    BancoDeDados::salvarDados(retornos, "alunos.txt");
    

    

}