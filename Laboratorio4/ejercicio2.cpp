#include "iostream"
using namespace std;
int main(void)
{
    cout<< endl;

    int numero=0;
    cout<<"VERIFICAR SI UN NUMERO ES PAR O IMPAR " << endl; cout<< endl;

    cout<<"Ingrese el numero: ";
    cin>> numero;
    
    if (numero % 2 == 0){
        cout<<"El numero "<<numero<<" es par"; cout<< endl;
    }else{
        cout<<"El numero "<<numero<<" es impar"; cout<< endl;

    }
    return 0; 
}