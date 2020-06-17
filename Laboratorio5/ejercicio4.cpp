#include "iostream"
using namespace std;

bool es_bisiesto(int a){
    return ((a % 4) == 0 && (a % 100) !=0) || ((a % 400) == 0);
}

int dias_mes(int m, int a){
    int dias = 31;
    if(m == 4 || m == 6 || m == 9 || m == 11 ){
        dias = 30; 
    }else if (m == 2){
        if(es_bisiesto(a)){
            dias = 29;
        }else {
            dias = 28;
        }
    }
    return dias;
}

int main(){
    int d, m, a;
    char c;
cout<<endl;   
cout<<"FECHA DEL A\244O"<<endl;
cout<<"Ingrese la fecha (entre plecas): "<<endl;
cin>>d>>c>>m>>c>>a;

d++;
if(d > dias_mes(m, a)){
    d = 1;
    m++;
    if(m > 12){
        m = 1;
        a++;
  }
} 

if(d < 10) cout<< 0;
cout<< d;
cout<< '/';
if(m < 10) cout << 0;
cout<< m;
cout<< '/';
cout<< a;
cout<< endl;

}