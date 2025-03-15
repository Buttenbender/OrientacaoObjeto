#include "HPessoa.h"
#include <string>
#include <iostream>

using namespace std;

int main() {
    Pessoa p1("João", 19, 1.80, 0, "Rua 1, 111");
    Pessoa p2("Alexia", 19, 1.60, 1, "Rua 2, 222");
    Pessoa p3("Gertrudes", 280, 1.15, 50, "Casa dos bobos, 0");
    
    p1.imprime_info();
    p1.verifica_filho_unico();
    cout << "-------------------------------------" << endl;
    p2.imprime_info();
    p2.verifica_filho_unico();
    cout << "-------------------------------------" << endl;
    p3.imprime_info();
    p3.verifica_filho_unico();
    cout << "-------------------------------------" << endl;

    return 0;
}