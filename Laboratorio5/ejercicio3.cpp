#include "iostream"
using namespace std;

bool Abisiesto(int a){ 
    if ((a%400)==0) 
    return true;
    else if ((a%4)==0 && (a%100)!=0)
    return true; 
    else         
    return false;

}

int main(void){
    int a;

    cout<<"DETERMINAR SI UN A\244O ES BISIESTO O NO\n\n";
    cout<<"Digite el a\244o: ";
    cin>>a;

        if((Abisiesto(a))==true) 
    cout<<"El a\244o ingresado es bisiesto"<<endl;
    else
    cout<<"El a\244o ingresado no es bisiesto"<<endl;
    
    return 0;
    
}
