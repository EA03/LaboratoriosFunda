#include "iostream"
using namespace std;

const int longCad = 20;

struct costoPorArticulo{ //estructura 
    char nombreArticulo[longCad + 1];
    int cantidad;
    float precio;
    float costoPorArticulo;

};

void DatosArticulos(costoPorArticulo Articulo[], int cantidad){ //funcion que contiene los datos de los articulos ingresados.

    cout<<"\nINGRESE LOS DATOS DEL ARTICULO\n";
    for(int i = 0; i < cantidad; i++){
        cin.ignore(100, '\n');
        cout<<endl;
        cout<<"Ingrese el nombre del articulo "<<i + 1<< ": ";
        cin.getline(Articulo[i].nombreArticulo,21 , '\n');
        cout<<"Ingrese la cantidad del articulo: ";
        cin>>Articulo[i].cantidad;
        cout<<"Ingrese el precio unitario del articulo:$";
        cin>>Articulo[i].precio;
    }

}

void CostoArticulo(costoPorArticulo Articulo[], int cantidad){//funcion que sacara el costo total por articulo
    for(int i = 0; i < cantidad; i++)
    Articulo[i].costoPorArticulo = Articulo[i].precio*Articulo[i].cantidad;
}

void ContenidoArreglos(costoPorArticulo Articulo[], int cantidad){//funcion que desplegara el contenido del arreglo
     for(int i = 0; i < cantidad; i++){
     cout<<endl;
     cout<<"------FACTURA DE COMPRA------"<<endl;
     cout<<"Nombre del Articulo "<<i + 1<<": "<<Articulo[i].nombreArticulo<<endl;
     cout<<"Cantidad del producto: "<<Articulo[i].cantidad<<endl;
     cout<<"Precio Unitario del Articulo: $"<<Articulo[i].precio<<endl;
     cout<<"Precio total: $"<<Articulo[i].costoPorArticulo<<endl;
     }

}
float CostoTotalCompra(costoPorArticulo Articulo[], int cantidad){//funcion que sacara el costo total de la compra realizada
    float CostoTotal;

    for(int i = 0; i < cantidad; i++)
    CostoTotal = Articulo[i].costoPorArticulo+CostoTotal;

    return CostoTotal; //retornara el dato almacenado en la variable CostoTotal 
}

int main(){ 
    int ArticulosComprados;

    cout<<"PRODUCTOS COMPRADOS EN UNA TIENDA"<<endl<<endl;

    cout<<"\xA8""Cuantos Articulos desea comprar?: ";
    cin>> ArticulosComprados;

    costoPorArticulo Guardar[ArticulosComprados];//llamamos a todas las funciones 
    DatosArticulos(Guardar, ArticulosComprados);
    CostoArticulo(Guardar, ArticulosComprados);
    ContenidoArreglos(Guardar, ArticulosComprados);

    cout<<endl;
    cout<<"El precio total de su compra es: $"<<CostoTotalCompra(Guardar, ArticulosComprados);
    cout<<endl<<endl;
    cout<<"GRACIAS POR SU COMPRA, REGRESE PRONTO :)";
    cout<<endl;
    return 0;

}
