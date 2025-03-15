#ifndef HCalculadora_H
#define HCalculadora_H

#include <iostream>
#include <string>

using namespace std;

class Calculadora {
    private:
        float memoria;
        string cor;
    
    public:
        Calculadora(string cor);
        
        float getMemoria() const;
        void setMemoria(float valor);
        
        string getCor() const;
        void setCor(string novaCor);
        
        float soma(float x, float y);
        float subtrai(float x, float y);
        float multiplica(float x, float y);
        float divide(float x, float y);
        
        int eleva_ao_quadrado(int x);
        int eleva_ao_cubo(int x);
        
        void imprime_info() const;
};

#endif