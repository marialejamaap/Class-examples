// El programa consiste en ingresar dos numeros e imprimirlos en consola
/* Objetivos: Nombrar variables, asignar variables, utilizar elementos de entrada
y salida*/
#include <stdlib.h>
#include <iostream>

using namespace std;// evita escribir los elementos del espacio de nombres std::<elemento>

int main()
{

    int num1, num2; // defino variables tipo entero(int) y las nombro(num1, num2);
    cout<<" \t\t Enter two numbers " <<endl;
    cout <<" number 1: "; cin>>num1;
    cout << " number 2: "; cin>>num2;
    system("cls"); // limpia lo que hay en consola (este elementos va en librería stdlib.h)
    cout<<" The numbers are: " <<num1 <<" and " <<num2;//imprima los números ingresados en consola
    cout<<endl<<endl; // imprima dos saltos de línea

    return 0; // retorno de función principal a 0
}

/*para flotantes o numeros más grandes que ocupen más cantidad de memoria
sólo es cambiar el tipo de dato de las variables num*/
