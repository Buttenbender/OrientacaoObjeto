#include "HLivro.h"
#include <iostream>
#include <string>

using namespace std;

Livro::Livro(string nome, string autor, int anoLancamento, string genero) {
    this->nome = nome;
    this->autor = autor;
    this->anoLancamento = anoLancamento;
    this->genero = genero;
}

void Livro::imprimeInfo() {
    cout << "Informações do Livro:" << endl;
    cout << "-------------------------------" << endl;
    cout << "Nome: " << nome << endl;
    cout << "Autor: " << autor << endl;
    cout << "Ano de Lançamento: " << anoLancamento << endl;
    cout << "Gênero: " << genero << endl;
    cout << "-------------------------------" << endl;
}