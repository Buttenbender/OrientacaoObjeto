#include "HRetangulo.h"
#include <iostream>

using namespace std;

Retangulo::Retangulo() {
    base = 0;
    altura = 0;
}

int Retangulo::getBase() {
    return base;
}

int Retangulo::getAltura() {
    return altura;
}

void Retangulo::setBase(int base) {
    this->base = base;
}

void Retangulo::setAltura(int altura) {
    this->altura = altura;
}

int Retangulo::calcularArea() {
    return base * altura;
}

void Retangulo::mostrarValores() {
    cout << "Base: " << base << ", Altura: " << altura << ", Área: " << calcularArea() << endl;
}