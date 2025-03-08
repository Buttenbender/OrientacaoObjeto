#include "ClassRetangulo.h"
#include <iostream>

using namespace std;

int Retangulo::getBase() {
    return base;
}

int Retangulo::getAltura() {
    return altura;
}

void Retangulo::setBase(int novaBase) {
    base = novaBase;
}

void Retangulo::setAltura(int novaAltura) {
    altura = novaAltura;
}

int Retangulo::calcularArea() {
    return base * altura;
}

void Retangulo::mostrarResultados() {
    cout << "Base: " << getBase()
    << ", Altura: " << getAltura()
    << ", Área: " << calcularArea()
    << endl;
}