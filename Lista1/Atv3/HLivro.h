#include <string>

using namespace std;

class Livro {
    private:
        string nome;
        string autor;
        int anoLancamento;
        string genero;
    
    public:
        Livro(string nome, string autor, int anoLancamento, string genero);
        void imprimeInfo();
};