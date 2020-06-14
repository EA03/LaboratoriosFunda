#include "iostream"
using namespace std;

bool Abisiesto(int a){ //funcion booleana que contendra todas las operaciones de comprobacion 
    
    if ((a%400)==0) //si el a;o ingresado es divisible entre 400 entonces es bisiesto
    return true;
    else if ((a%4)==0 && (a%100)!=0)//si el a;o es divisible entre 4 pero no entre 100 tambien es bisiesto
    return true; 
    else         //si no se cumple ninguna de las anteriores entonces el a;o no es bisiesto
    return false;

}

int main(void){
    int a;

    cout<<"DETERMINAR SI UN A\244O ES BISIESTO O NO\n\n";
    cout<<"Digite el a\244o: ";
    cin>>a;

        if((Abisiesto(a))==true) //si lo almacenado en la funcion anterior se cumple o no, se mostrara esto
    cout<<"El a\244o ingresado es bisiesto";
    else
    cout<<"El a\244o ingresado no es bisiesto";
    
    return 0;
    
}
