#include "HLivro.h"
#include <string>

using namespace std;

int main() {
    Livro l("Passeio ao Farol", "Virginia Woolf", 1927, "Ficção / Romance de Amor");
    
    l.imprimeInfo();
    
    return 0;
}