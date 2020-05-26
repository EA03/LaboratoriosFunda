#include "iostream"
using namespace std;
int main(void)
{
    cout<< endl;
    int numero;
     
    cout<<"VERIFICAR SI UN NUMERO ES POSITIVO, NEGATIVO O CERO "; 
    cout<< endl; 
    cout<< endl;

    cout<<"Ingrese el el numero: ";
    cin>> numero;

    if(numero > 0){
        cout<<"El numero "<<numero<<" es positivo"; cout<<endl;

    }else if (numero < 0){
        cout<<"El numero "<<numero<<" es negativo";cout<<endl;

    }else if (numero == 0){
        cout<<"El numero "<<numero<<" es cero";cout<<endl;


    }
    return 0;

}