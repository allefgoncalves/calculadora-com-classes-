#include <iostream>
using namespace std;

class Operacoes{
    protected:
        double operador1; //Primeiro Operador
        double operador2; //Segundo Operador
    public:
        Operacoes(double Op1, double Op2){
            operador1 = Op1;
            operador2 = Op2;
        }
        
        virtual double multiplicar(){
            return operador1 * operador2; 
        }    
};

class Operacoes_Basicas: public Operacoes{
    public:
    Operacoes_Basicas(double Op1, double Op2): Operacoes(Op1, Op2){}
    double adicionar(){
        return operador1 + operador2;
    }

    double multiplicar() override{ //redefinindo o metodo
        return operador1 * operador2; 
    }
};

int main(){
    Operacoes_Basicas operacao(3, 7);
    cout << "resultado da multiplicao: " << operacao.multiplicar() << endl;
    cout << "resultado da adicao: " << operacao.adicionar() << endl;
    return 0;
}