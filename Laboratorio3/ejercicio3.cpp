#include "iostream"
#include "cmath"

using namespace std;

int main (void)
{
    float x1, x2;
    int a, b, c;

    cout << "FORMULA CUADRATICA" << endl << endl;

    cout << "Ingrese el valor de a: ";
    cin >> a;

    cout << "Ingrese el valor de b: ";
    cin >> b;

    cout << "Ingrese valor de c: ";
    cin >> c; 
    cout << endl;

    cout <<"El resultado aplicando la formula cuadratica es: " << endl;

    x1 = (-b+(sqrt(b*b-4*a*c)))/(2*a);

    x2 = (-b-(sqrt(b*b-4*a*c)))/(2*a);

    cout << "x1 = " << x1 << endl;

    cout << "x2 = " << x2 << endl; 

    return 0;
}