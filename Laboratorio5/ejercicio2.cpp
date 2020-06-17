#include "iostream"
using namespace std;
int main(){

int hora, min, seg;
char c;

cout<<endl;
cout<<"HORAS EN EL DIA"<<endl<<endl;

cout<<"Ingrese la hora (separada por dos puntos): ";
cin>>hora>>c>>min>>c>>seg;

seg = seg + 1;
if(seg>=60){
    seg = 0;
    min = min + 1;
    if(min>=60){
        min = 0;
        hora = hora + 1;
        if(hora>=24){
            hora = 0;
        }
    }
}
if(hora<10) cout<< 0;
cout<< hora;
cout<< ':';
if(min<10) cout << 0;
cout<< min;
cout<< ':';
if(seg<10) cout<< 0;
cout<< seg;
cout<< endl;

return 0;

}   