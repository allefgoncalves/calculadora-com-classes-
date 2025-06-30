#include <iostream>
using namespace std;

class Operacoes{
    private:
        double operador1; //Primeiro Operador
        double operador2; //Segundo Operador
    public:
        Operacoes(double Op1, double Op2){
            operador1 = Op1;
            operador2 = Op2;
        }
        
        double multiplicar(){
            return operador1 * operador2; 
        }    
};

int main(){
    Operacoes operacao(6, 2);
    cout << "resultado da multiplicao: " << operacao.multiplicar() << endl;
    return 0;
}