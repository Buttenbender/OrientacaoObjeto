class Retangulo {
    private:
        int base;
        int altura;
    
    public:
        Retangulo();
        
        int getBase();
        int getAltura();
        void setBase(int base);
        void setAltura(int altura);
        int calcularArea();
        void mostrarValores();
};