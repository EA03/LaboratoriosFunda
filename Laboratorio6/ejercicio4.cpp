#include "iostream"
using namespace std;

void LeerArreglo(int arr[], int n){
    for(int i = 0; i<n ; i++){
        cout<<"Ingrese el numero"<<" "<< i <<endl;
        cin>>arr[i];
    }
}

void sumArreglos(int arr1[], int arr2[], int n, int resultante[]){
    for(int i = 0; i < n ; i++){
        resultante[i] = arr1[i] + arr2[i]; 
    }
}

void Resultado(int resultante[], int n){
    cout<<endl;
    cout<<"El tercer arreglo es: "<<endl;
    for(int i = 0; i < n; i++){
        cout<< resultante[i]<<endl;
        cout<<endl;
    }
}

int main(){
    
    cout<<endl;
    cout<<"SUMA DE LOS ELEMENTOS DE DOS ARREGLOS PARA GENERAR UN TERCERO"<<endl;
    cout<<endl;

    int n = 5;
    int arr1[n];
    int arr2[n];
    int resultante[n];
    LeerArreglo(arr1,n);
    LeerArreglo(arr2,n);
    sumArreglos(arr1, arr2,n,resultante);
    Resultado(resultante,n);
}