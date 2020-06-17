#include "iostream"
using namespace std;
int mcd(int x, int y, int residuo){
    do
    {
        residuo= x % y;
        if (residuo!=0){
            x = y;
            y = residuo;
        }

    }
    while(residuo !=0);  
    cout<<"El MCD es: "<<y<<endl;
}
int main(){
    int x, y, residuo;

    cout<<endl;
    cout<<"MCD DE DOS NUMEROS";
    cout<<endl<<endl;

    cout<<"Ingrese el primer numero: ";
    cin>>x;
    cout<<"Ingrese el segundo numero: ";
    cin>>y;

 return mcd(x, y, residuo);
}

