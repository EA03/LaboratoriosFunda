#include "iostream"
#include "stdlib.h"//Para evitar que se cierre
#include "time.h"// Esta libreria genera el numero aleatorio
using namespace std;
int numAleatorio(){
    int aleatorio;
    srand(time(NULL));//Generador del numero aleatorio
    aleatorio=1+ rand()%(100-1);
    return aleatorio;
}
int main(){
int n=numAleatorio(), P_resultados;
cout<<"ADIVINA UN NUMERO ENTRE 1 Y 100"<<endl;
cout<<endl;
cout<<"Tendras 5 intentos para adivinar, si deseas terminar el juego digita una letra"<<endl;
for(int i=5; i>=1; i--){ //Ciclo for con variable inicial y valor final
    cout<<"Digite un numero: ";
    cin>>P_resultados;
    if( !cin>>P_resultados){
        cout<<"Juego finalizado"<<endl;
        cout<<"El numero secreto era: "<<n;
        break;
    }
    else if (P_resultados==n){ //Si el valor ingresado es igual al numero secreto aparecera en la pantalla
        cout<<"FELICIDADES ACERTASTE EN EL NUMERO";
        break;
    }
    if(P_resultados>n&&(i-1)!=0) //Si el valor ingresado es mayor al numero secreto aparecera la pista
    cout<<"El numero es mayor al numero secreto\n Los intentos restantes son: " <<(i-1)<<endl;
    else if(P_resultados<n&&(i-1)!=0)//Si el valor ingresado es menor al numero secreto aparecera la pista
    cout<<"El numero es menor al numero secreto\n Los intentos restantes son: " <<(i-1)<<endl;
    else
    cout<<"Te has quedado sin intentos :(\n El numero secreto es: "<<n;
    
  } 
  return 0;
}
   