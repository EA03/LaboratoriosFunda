#include "iostream"
using namespace std;

int contarRepeticiones(int arreglo[], int n, int digito){
    int numRepeticiones = 0;
    for(int i = 0; i < n;i++){
        if(arreglo[i] == digito){
            numRepeticiones++;
        }

    }
    return numRepeticiones;
}

int main(){
    
    int arreglo[20] ={1,1,1,1,2,2,3,3,4,4,4,5,6,6,7,7,7,8,8,9};

    int n;

    cout<<endl;
    cout<<"CUANTAS VECES SE REPITE UN NUMERO EN UN ARREGLO"<<endl;
    cout<<endl;
    cout<<"Ingrese el digito a comparar: ";
    cin>>n;

    cout<<endl;
    cout<<"El numero de repeticiones del numero "<<n<<" en el arreglo es "<<contarRepeticiones(arreglo,20,n)<<endl;
    cout<<endl;
}