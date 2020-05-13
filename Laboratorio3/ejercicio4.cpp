#include "iostream"
#include "math.h"

using namespace std;

int main(void)
{
   string producto;
   int cantidad;
   float precio, total;

   cout <<"COMPRA REALIZADA" << endl << endl;

   cout <<"Introduce el nombre del producto: ";
   cin >> producto;
   cout << endl;

   cout <<"Introduce el precio del producto:$ ";
   cin >> precio;
   cout << endl;

   cout <<"Introduce la cantidad del producto: ";
   cin >> cantidad;
   cout << endl;

   total = cantidad*precio;

   cout <<"El producto comprado es: " << producto << endl;
   cout <<"Su precio c/u es :$ " << precio << endl;
   cout <<"La cantidad a pagar es:$ " << total << endl;

   return 0;

}
