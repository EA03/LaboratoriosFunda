#include "iostream"
#include "string.h"
using namespace std;
int main(void)
{
    cout<<endl;
    cout<<"VERIFICAR SI LA PALABRA ES MAYOR A 10 CARACTERES O NO Y SI LA LONGITUD ES PAR O IMPAR"<<endl;
    cout<<endl; 
    
     int longitud;
    string palabra;

    cout<<"Ingrese una palabra: ";
    cin>> palabra;
    
    longitud = palabra.length();

    if(longitud > 10){
        cout<<"La palabra es mayor a 10 caracteres";
    }
    else{
        cout<<"La palabra es menor a 10 caracteres";
    }
    if((longitud % 2)==0){
        cout<<" y la longitud es par.";
    }
    else{
        cout<<" y su longitud es impar.";

    }

 return 0;
    }