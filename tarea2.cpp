#include <iostream>
#include <string>
using namespace std;

int main(){

    char nota;
    cout <<" ingrese calificacion 'A' 'B' 'C' 'D' O 'F'";
    cout << "\n ingresa nota:";
cin >> nota;
switch (nota) {

case 'A':
cout<<" Excelente, todo ha sido perfecto"<<endl;
break;
case 'B':
    cout<<" Bueno, todo ha sido bien"<<endl;
    break;

case 'C':
    cout<<" Regular, debes mejorar"<<endl ;
    break;
case 'D':
    cout<<" Mal, debes repasar " <<endl;
    break;

case 'F':
    cout<<" Demasiado mal, debes empezar desde 0"<<endl;
    break;

default:
  cout<<"\n ingresa tu nota como 'A' 'B' 'C' 'D' o 'F' nuevamente"<<endl;
    break;
}
}
