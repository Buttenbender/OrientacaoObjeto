#include "HPessoa.h"
#include <string>
#include <iostream>

using namespace std;

Pessoa::Pessoa(string nome, int idade, float altura, int qntdIrmaos, string endereco) {
    this->nome = nome;
    this->idade = idade;
    this->altura = altura;
    this->qntdIrmaos = qntdIrmaos;
    this->endereco = endereco;
}

void Pessoa::imprime_info() {
    cout << "Nome: " << nome << endl;
    cout << "Idade: " << idade << " anos" << endl;
    cout << "Altura: " << altura << " m" << endl;
    cout << "Quantidade de Irmãos: " << qntdIrmaos << endl;
    cout << "Endereço: " << endereco << endl;
}

bool Pessoa::is_filho_unico() {
    return qntdIrmaos == 0;
}

void Pessoa::verifica_filho_unico() {
    if (is_filho_unico()) {
        cout << nome << " é filho(a) único(a)!" << endl;
    }
    else {
        cout << nome << " não é filho(a) único(a)!" << endl;
    }
}