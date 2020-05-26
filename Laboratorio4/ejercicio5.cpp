#include "iostream"
#include "string.h"
using namespace std;
int main(void)
{
    cout<<endl;
    cout<<"VERIFICAR SI LA PALABRA INICIA Y FINALIZA CON LA MISMA LETRA"; cout<<endl; 
    cout<<endl;

    string palabra;

    cout<<"Ingrese una palabra toda en misculas: ";
    cin>> palabra;

    int c = palabra.length();

    if((palabra[0]) == palabra [c-1]){
        cout<<"La palabra inicia y finaliza con la misma letra.";
    }
    else{
        cout<<"La palabra empieza y termina con diferente letra.";
    }
  
return 0;

}