//Ejemplo de ámbitos, con la variable pi como global y r en
// ámbitos locales de la función circular_area y en main () como una
// variable tipo string

#include <iostream>
#include <conio.h>
using namespace std;
float pi = 3.14;
float circular_area(float r);
int main(){
    float area, radius;
    radius=1;
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
    return pi*r*r;
}
