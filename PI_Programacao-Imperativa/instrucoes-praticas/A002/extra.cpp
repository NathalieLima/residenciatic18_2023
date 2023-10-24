#include <iostream>
#include <string>
#include <vector>
#include <climits>
#include <cctype>

bool isTextoValido(std::string, int);
bool isPar(int);
bool isImpar(int);
bool isNumeroValido(int);
// template<typename T> void getValorMinimo(vector<T>, T &);
// template<typename T> void getValorMinimo(vector<T>, T &);
// pq n pd ficar aqui?

bool isTextoValido(std::string _nome, int _limite)
{
    if (_nome.empty() || (_nome.length() > _limite && _limite != 0)) {
        return false;
    }

    return true;
}



bool isPar(int _numero)
{
    return _numero % 2 == 0;
}

bool isImpar(int _numero)
{
    return _numero % 3 == 0;
}

bool isNumeroValido(int numero) 
{
    return isPar(numero) || isImpar(numero) || numero == 1;
}