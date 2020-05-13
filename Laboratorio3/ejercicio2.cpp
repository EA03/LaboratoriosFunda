#include "iostream" 
#include "cmath"

using namespace std;

int main(void)
{
    float radio, area, perimetro, pi=3.1416;

    cout <<"AREA Y PERIMETRO DE UN CIRCULO A TRAVES DE SU RADIO" << endl;
    cout << endl;

    cout << "Ingrese el radio del circulo: ";
    cin >> radio;

    area = pi * pow(radio,2 );
    perimetro = 2 * pi * radio;

    cout <<"El area del circulo es: " << area << endl;
    cout <<"La perimetro del circulo es: " << perimetro << endl;

    return 0;

}