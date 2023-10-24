#include <iostream>
#include <string>
#include <vector>
#include <climits>
#include <cctype>

#include "extra.cpp"

using namespace std;

template<typename T> void getValorMaximo(vector<T> elementos, T &maximo) 
{
    T max = INT_MIN;

    for (unsigned int i = 0; i < elementos.size(); i++)
    {
        if (elementos[i] > max) { max = elementos[i]; }
    }

    maximo = max;
}

template<typename T> void getValorMinimo(vector<T> elementos, T &minimo) 
{
    T min = INT_MAX;

    for (unsigned int i = 0; i < elementos.size(); i++)
    {
        if (elementos[i] < min) { min = elementos[i]; }
    }

    minimo = min;
}

string getMenorString(vector<string> elementos)
{
    string menor = elementos[0];

    for (unsigned int i = 1; i < elementos.size(); i++)
    {
        if ( elementos[i].length() < menor.length() ) {
            menor = elementos[i];
        }
    }

    return menor;
}

string getMaiorString(vector<string> elementos)
{
    string maior = "";

    for (unsigned int i = 0; i < elementos.size(); i++)
    {
        if ( elementos[i].length() > maior.length() ) {
            maior = elementos[i];
        }
    }

    return maior;
}

class Data {
	int dia, mes, ano;
	public:
	
	/*
	O m�todo abaixo retornar� -1 se d1 � anterior a d2
	Retornar� 0 se d1 = d2
	Retornar� +1 se d1 � posterior a d2
	*/	
	static int compara(Data d1, Data d2) { 
		return 0;
	}
	
	Data (int _dia, int _mes, int _ano) {
		dia = _dia;
		mes = _mes;
		ano = _ano;
	}
	string toString() {
		string ret = "";
		ret.append(to_string(dia));
		ret.append("/");
		ret.append(to_string(mes));
		ret.append("/");
		ret.append(to_string(ano));
		return ret;
	}
};

template<class T>class Lista {
    private:
    
    vector< vector<T> > lista_de_listas;
 

	public:
	virtual void entradaDeDados() =0;
	virtual void mostraMediana() =0;
	virtual void mostraMenor() =0;
	virtual void mostraMaior() =0;
};



class ListaNomes {
	vector<string> lista;
	
	public:
	
	/*
	O m�todo abaixo pergunta ao usu�rios quantos
	elementos v�o existir na lista e depois
	solicita a digita��o de cada um deles
	*/	
	void entradaDeDados() 
    {
        string elemento;
        int qtde;
        bool flag;
        
        do 
        {
            // solicitar quantidade de elementos
            cout << "Quantos elementos vão existir na lista? "; cin >> qtde;

            // verificar se o número fornecido é válido, isto é, acima de 0
            flag = isNumeroValido(qtde);

            if (!flag) 
            {
                cout << "Aviso: Entre com um número a partir de 1." << endl;
            }
        } 
        while (!flag);


		// solicitar cada elemento
        for (int i = 0; i < qtde; i++) 
        {
            cout << "Elemento " + to_string(i + 1) + ": "; cin >> elemento;
            //-colocar validacao

            lista.push_back(elemento);
        }
	}
		
	void mostraMediana() 
    {   
        int divisao = (lista.size() / 2);
        string mediana = "";

        if ( isPar(divisao) )
        {
            string primeiro = lista[divisao - 1];
            string segundo = lista[divisao ];
             
            for ( unsigned int i = 0; i < primeiro.length() && mediana == ""; i++ ) 
            {
                if ( primeiro[i] > segundo[i] ) {
                    mediana = primeiro;
                } 
                else if ( primeiro[i] < segundo[i] ) {
                    mediana = segundo;
                }
            }
        } 
        else
        {
            mediana = lista[divisao];
        }

		cout << "A mediana da lista de nomes é: " << mediana << endl;
	}
	
	void mostraMenor() 
    {
        string menor = getMenorString(lista);

		cout << "O primeiro nome alfabeticamente é: " << menor << endl;
	}

	void mostraMaior() 
    {
        string maior = getMaiorString(lista);
        
		cout << "O último nome alfabeticamente é: " << maior << endl;
	}
};


class ListaDatas  {
	vector<Data> lista;
	
	public:
		
	/*
	O m�todo abaixo pergunta ao usu�rios quantos
	elementos v�o existir na lista e depois
	solicita a digita��o de cada um deles
	*/	
	void entradaDeDados() {
		
	}
	
	void mostraMediana() {
		cout << "Aqui vai mostrar a mediana da lista de datas" << endl;
	}
	
	void mostraMenor() {
		cout << "Aqui vai mostrar a primeira data cronologicamente" << endl;
	}
	void mostraMaior() {
		cout << "aqui vai mostrar a ultima data cronologicamente" << endl;
	}
};

class ListaSalarios  {
	vector<float> lista;
	
	public:
	
	/*
	O método abaixo pergunta ao usuários quantos
	elementos vão existir na lista e depois
	solicita a digitação de cada um deles
	*/	
	void entradaDeDados() 
    {
        float elemento;
        int qtde;
        bool flag;
        
        do 
        {
            // solicitar quantidade de elementos
            cout << "Quantos elementos vão existir na lista? "; cin >> qtde;

            // verificar se o número fornecido é válido, isto é, acima de 0
            flag = isNumeroValido(qtde);

            if (!flag) 
            {
                cout << "Aviso: Entre com um número a partir de 1." << endl;
            }
        } 
        while (!flag);
        
		// solicitar cada elemento
        for (int i = 0; i < qtde; i++) 
        {
            cout << "Elemento " + to_string(i + 1) + ": "; cin >> elemento;
            //-colocar validacao

            lista.push_back(elemento);
        }
	}
			
	void mostraMediana() 
    {   
        int divisao = (lista.size() / 2);
        float mediana;

        if ( isPar(divisao) )
        {
            mediana = (lista[divisao] + lista[divisao - 1]) / 2;
        } 
        else
        {
            mediana = lista[divisao];
        }

		cout << "A mediana da lista de salários é: " << mediana << endl;
	}
	
	void mostraMenor() 
    {
        float menor;
        getValorMinimo(lista, menor);

		cout << "O menor dos salarios é: " << menor << endl;
	}

	void mostraMaior() 
    {
        float maior;
        getValorMaximo(lista, maior);
        
		cout << "O maior dos salarios é: " << maior << endl;
	}
};


class ListaIdades  {
	vector<int> lista;
	
	public:
		
		/*
	O m�todo abaixo pergunta ao usu�rios quantos
	elementos v�o existir na lista e depois
	solicita a digita��o de cada um deles
	*/	
	void entradaDeDados() {
		
	}

    void mostraMediana() 
    {   
        int divisao = (lista.size() / 2);
        float mediana;

        if ( isPar(divisao) )
        {
            mediana = (lista[divisao] + lista[divisao - 1]) / 2;
        } 
        else
        {
            mediana = lista[divisao];
        }

		cout << "A mediana da lista de idades é: " << mediana << endl;
	}
	
	void mostraMenor() 
    {
        int menor;
        getValorMinimo(lista, menor);

		cout << "O menor das idades é: " << menor << endl;
	}

	void mostraMaior() 
    {
        int maior;
        getValorMaximo(lista, maior);
        
		cout << "O maior das idades é: " << maior << endl;
	}
};


 
int main () {
	// vector<Lista*> listaDeListas;
	
	ListaNomes listaNomes;
	listaNomes.entradaDeDados();
    listaNomes.mostraMediana();
    listaNomes.mostraMenor();
    listaNomes.mostraMaior();
	//listaDeListas.push_back(&listaNomes);
	
	// ListaDatas listaDatas;
	// listaDatas.entradaDeDados();
	// listaDeListas.push_back(&listaDatas);
	
	ListaSalarios listaSalarios;
	listaSalarios.entradaDeDados();
    listaSalarios.mostraMediana();
    listaSalarios.mostraMenor();
    listaSalarios.mostraMaior();

	//listaDeListas.push_back(&listaSalarios);
	
	// ListaIdades listaIdades;
	// listaIdades.entradaDeDados();
	// listaDeListas.push_back(&listaIdades);
	
	// for (Lista* l : listaDeListas) {
	// 	l->mostraMediana();
	// 	l->mostraMenor();
	// 	l->mostraMaior();
	// }

    
	
}