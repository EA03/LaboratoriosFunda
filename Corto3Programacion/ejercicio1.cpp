#include "iostream"
using namespace std;
void CalSalario()
{
int ht, hx;
float horaT,horaE,sTotal,sReal,ISSS,AFP, r, RENTA;
cout<<endl;

cout<<"Ingrese horas trabajadas: ";
cin>>ht; //Horas trabajadas 
cout<<"Ingrese hotras extras: ";
cin>>hx; //Horas extras
cout<<endl; 

horaT = ht*1.75; 
horaE = hx*2.50;

sTotal = horaT+horaE;

ISSS = sTotal*0.04;
AFP = sTotal*0.0625;
r = sTotal-(ISSS+AFP);
RENTA = 0;
       if(r){
       if(r>500){ //Si el salario total es mayor a $500 se le realizara el descuento de la renta
       RENTA = r*0.1;
    }
       else{
       if(sTotal<=500){ //Si el salario total es menor a $500 no se realizara el descuento de la renta
       RENTA =0;
    }
  }
}

sReal = sTotal-(ISSS+AFP+RENTA); //El salario real va ser igual al salario total menos los descuentos

cout<<"El salario total es igual a:$ "<<sTotal<<endl;
cout<<"El salario real es igual a:$ "<<sReal<<endl;
cout<<endl;
}

int main(){
int opcion=0;

cout<<endl;
cout<<"CALCULO DE SALARIOS"<<endl<<endl;

do{
cout<<"Menu de opciones: "<<endl;// Menu que vera el usuario
cout<<"1.------Calcular salario"<<endl;
cout<<"2.------Salir"<<endl<<endl;

cout<<"Seleccione una opcion: ";
cin>>opcion;
cout<<endl;
       if(opcion){
       if(opcion==1){ //Si selecciona la opcion 1 se realizara todo lo almacenado en la funcion 
       CalSalario();  //anterior
    }

      else{
      if(opcion>2){//Al ingresar una opcion no valida retornara al menu
      cout<<"Seleccione una opcion valida."<<endl;
    }
  }
}

}while(opcion!=2);// Al seleccionar la opcion 2 el programa finalizara
cout<<endl;
cout<<"Usted ha salido";

return  0;

}
