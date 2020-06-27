#include "iostream"
using namespace std;

char cmurcielago(char caracter){ //funcion que contendra las equivalencias en clave murcielago
    switch(caracter) //utilizamos un switch para dejar en el programa las equivalencias en cada caso
    {
        case 'm' :caracter = '0'; break; //empezamos asignando los valores de la clave segun las letras que sean ingresadas
        case 'u' :caracter = '1'; break; //asi en cada caso hasta el final de la clave
        case 'r' :caracter = '2'; break;
        case 'c' :caracter = '3'; break;
        case 'i' :caracter = '4'; break;
        case 'e' :caracter = '5'; break;
        case 'l' :caracter = '6'; break;
        case 'a' :caracter = '7'; break;
        case 'g' :caracter = '8'; break;
        case 'o' :caracter = '9'; break;
    }
    return caracter; //va a retornar los caracteres segun las letras de la frase

}
int main(){

    int log;
    string arr; //declaramos una variable de tipo string para la frase

    cout<<endl;
    cout<<"CODIFICAR UNA FRASE UTILIZANDO SU EQUIVALENCIA EN CLAVE MURCIELAGO"<<endl<<endl;
    cout<<"Ingrese una frase(en minusculas): "<<endl;
    getline(cin, arr); //la frase va ser almacenada en arr
    log = arr.length();
    for(int i = 0; i < log; i++) 
    {
        cout<<(cmurcielago(arr[i])); //mandamos a llamar la funcion anterior 
    }
    cout<<endl;
    return 0;
} 