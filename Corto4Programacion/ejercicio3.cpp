#include "iostream"
using namespace std;

void llenarMatriz(float matriz[][5], int cantidad){ //funcion que llenara la matriz 

    float nota;
    for(int i = 0; i < cantidad; i ++) // ciclo for que realizara "n" repeticiones segun cantidad de de alumnos ingresada
    {
        for(int j = 0; j < 5; j++) //ciclo for que realizara las 5 repeticiones para ingresar las 5 notas del alumno
        {
            cout<<"Ingrese la nota "<< (j + 1) <<" del alumno "<< (i + 1) <<": ";
            cin>>nota;
            matriz[i][j] = nota; //el numero de alumnos y las notas se almacenaran en la matriz
        }
        cout<<endl;
    }

}

void notaFinal(float matriz[][5],int cantidad){ //funcion que calculara la nota final de cada alumno

    float final;
    for(int i =0; i < cantidad; i++)
    {
        for(int j = 0; j < 5; j++)
        {
           final+=((matriz[i][j])*0.20);
        }
        cout<<"La nota final del alumno "<< (i + 1)<<" es: "<< final <<endl;
        if(final >= 6)                                       //si la nota final es mayor a 6 el estudiante aprobara
           cout<<"El estudiante aprobo el curso"<<endl<<endl;
        else                                                 //si la nota final es menor a 6 el estudiante reprobara
           cout<<"El estudiante reprobo el curso"<<endl<<endl;
    final = 0;
    }
}

int main(){

    int estudiantesN = 0; //variable que almacenara el numero de estudiantes para llenar la matriz

    cout<<endl;
    cout<<"LEER 5 NOTAS Y CALCULAR NOTA FINAL"<<endl<<endl;

    cout<<"Ingrese el numero de estudiantes: ";
    cin>>estudiantesN; 
    cout<<endl;

    float notas[estudiantesN][5];
    llenarMatriz(notas,estudiantesN); //mandamos a llamar las funciones anteriores 
    notaFinal(notas,estudiantesN);

    return 0;
}
