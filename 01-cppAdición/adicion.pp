/*Adición
 *En este programa se pedira al usuario que ingrese dos números enteros, para luego poder obtener la suma de ambos.
 *Acevedo Motta Juan Carlos Chano
 *09/06/2020*/
 
#include <iostream>
using namespace std;
int main(){
    int a,b,suma=0;
    cout<<"Ingrese el primer numero: "<<endl; cin>>a;
    cout<<"Ingrese el segundo numero: "<<endl; cin>>b;
    suma = a + b;
    cout<<"\nEl resultado es: "<<suma<<endl;
    system("PAUSE()");
    return 0;
}
