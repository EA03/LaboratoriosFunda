#include "iostream"

using namespace std;

int main (void)
{
    int n1, n2, n3;
    float promedio;

    cout <<"PROMEDIO DE TRES NOTAS" << endl << endl; 

    cout <<"Ingrese nota 1 : ";
    cin >> n1;

    cout <<"Ingrese nota 2 : ";
    cin >> n2;

    cout <<"Ingrese nota 3: ";
    cin >> n3; 
 
 promedio = (n1+n2+n3)/3.0;
 cout << "El pomedio de las notas es: " <<promedio << endl;
 cout << endl;

 return 0; 

}