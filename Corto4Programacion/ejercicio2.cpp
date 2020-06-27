#include <iostream>
using namespace std;

float mediaAB(float arreglo[],int *sobre, int *abajo, float prom){ //funcion que realizara el conte de cuantas estan por
    for(int i = 0; i < 25; i++){                                   //debajo o encima de la media  
        if(arreglo[i] > prom)
           *sobre+=1; 
        else
          *abajo+=1;   
    }
    return 0;
}

int main(){

int i, Arribamedia=0, Abajomedia=0;
float  estaturas[25], suma, prom, n = 25;

cout << endl;
cout << "PROMEDIO DE 25 ESTATURAS Y CUANTAS ESTAN POR ENCIMA Y DEBAJO DE LA MEDIA" << endl << endl;
cout<<"Ingrese las "<< 25 <<" estaturas:"<<endl;
for(i = 0; i < n; i++)
    cin >> estaturas[i]; //arreglo que almacenara las 25 estaturas

suma = 0; 
for(i = 0; i < n; i++)  //ciclo for para llenar el arreglo con las 25 estaturas
    suma = suma + estaturas[i]; //la variable suma llevara el total al sumar las 25 estaturas en el arreglo
     cout << "La suma de los elementos del arreglo es: " << suma << endl;

prom = suma / n; //el promedio sera igual a la divicion de la suma de las 25 estaturas entre el numero de estaturas 

cout << "El promedio de estaturas es: " << prom << endl;
cout<<endl;

mediaAB(estaturas, &Arribamedia, &Abajomedia, prom); //mandaamos a llamar la funcion que contara cuantas estan por encima y debajo
cout<<"La cantidad de estaturas arriba de la media son: "<< Arribamedia <<endl;
cout<<"La cantidad de estaturas abajo de la media son: "<< Abajomedia <<endl;

return 0;
    
}
