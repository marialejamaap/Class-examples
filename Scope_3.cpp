//Ejemplo de ámbitos,  con la variable pi como global pero oculta al definirla nuevamente
// en cada uno de los ámbitos locales de la función main y circular_area. 
// Por esta razón se recomienda no utilizar variables globales 

#include <iostream>
#include <conio.h>
using namespace std;
float pi = 3.14;
float circular_area(float r);
int main(){
    float area, radius;
    radius=1;
    pi=0.0;
    area=circular_area(1);
    cout<<"(radius, Area): "<<"("<<radius<<","<<area<<")\n";
    cout<<" Computed with pi= "<<pi<<endl;
    string r="Goodbye!";
    cout<<r;
    getch();// Funciona al igual que el system("pause") presionar una tecla
    // para continuar
    return 0;
}

float circular_area(float r){
    int pi=3;
    return pi*r*r;
}
