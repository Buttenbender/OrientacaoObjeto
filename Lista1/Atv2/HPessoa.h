#include <string>

using namespace std;

class Pessoa {
    private:
        string nome;
        int idade;
        float altura;
        int qntdIrmaos;
        string endereco;
    
    public:
        Pessoa(string nome, int idade, float altura, int qntdIrmaos, string endereco);
        void imprime_info();
        bool is_filho_unico();
        void verifica_filho_unico();
};