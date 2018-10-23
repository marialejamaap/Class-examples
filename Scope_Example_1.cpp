//  Ejemplo de variable global:

#include <iostream>
using namespace std;

int x=1;
void funcion ();

int main(){
cout << x <<endl;
x++;
cout<< x << endl;

funcion();

cout << x <<endl;

system("pause");// para pausar el programa y dejar que finalice cuando el usuario
// presione cualquier tecla para continuar 

return 0;
}

void funcion(){

// La función también tiene  acceso a la  variable global

    x=x*2;
}
// La variable x  global deja de ser accesible cuando acaba la ejecución
// lo mejor es no utilizar variables globales excepto si son constantes
