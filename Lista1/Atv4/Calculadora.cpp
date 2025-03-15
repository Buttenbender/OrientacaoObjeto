#include "HCalculadora.h"

Calculadora::Calculadora(string cor) : memoria(0), cor(0) {}

float Calculadora::getMemoria() const {
    return memoria;
}

void Calculadora::setMemoria(float valor) {
    memoria = valor;
}

string Calculadora::getCor() const {
    return cor;
}

void Calculadora::setCor(string novaCor) {
    cor = novaCor;
}

float Calculadora::soma(float x, float y) {
    return x + y;
}

float Calculadora::subtrai(float x, float y) {
    return x - y;
}

float Calculadora::multiplica(float x, float y) {
    return x * y;
}

float Calculadora::divide(float x, float y) {
    if (y != 0) {
        return x / y;
    }
    else {
        cout << "Erro: Divisão por zero!" << endl;
        return 0;
    }
}

float Calculadora::eleva_ao_quadrado(float x) {
    return x * x;
}

float Calculadora::eleva_ao_cubo(float x) {
    return x * x * x;
}

void Calculadora::imprime_info() const {
    cout << "Calculadora - Cor: " << cor << ", Memória: " << memoria << endl;
}