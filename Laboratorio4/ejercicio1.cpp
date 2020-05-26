#include "iostream"
using namespace std;
int main(void)
{
    cout << endl;

    int a=0, b=0;
    cout<<"VERIFICAR SI UN NUMERO ES DIVISIBLE ENTRE OTRO" << endl;
    cout<< endl;

    cout <<"Ingrese el valor de a: ";
    cin >> a;

    cout <<"Ingrese el valor de b: ";
    cin >> b;

    if (a % b == 0){
    cout <<a<<" SI es divisible entre "<<b <<" :) " << endl;

    }else{ 
        cout <<a<<" NO es divisible entre "<<b <<" :(" << endl; 
    }

    return 0;
}

