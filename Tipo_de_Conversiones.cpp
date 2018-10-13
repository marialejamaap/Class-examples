/*El programa muestra un ejemplo de lo que es la conversión implicita
y la explicita (type casting) del tipo de variables*/

#include <iostream> //librería estándar para datos de entrada y salida


using namespace std;

int main(){
 short int a=200;
 int b=a; // Produce el mismo valor
 cout << "First Implicit Conversion " << endl;
 cout << " The value of the variable b is: " << b <<endl<<endl;


 cout << " Second Implicit Conversion "<< endl<<endl;
 float pi = 3.1415;
 int new_pi=pi;
 cout<<"  The value of the variable new_pi is: " << new_pi <<endl<<endl;

 cout << " Third Implicit Conversion "<< endl<<endl;
 float big_number= 32.5;
 bool flag =big_number; // Valor es (true o 1) para cualquier valor diferente de 0
 cout<<"  The value of the variable flag is: " << flag <<endl<<endl;

int x = 10;    // x es un entero
char y = 'a';  /* y es un caracter, en código ASCII equivale al número 97
pot lo tanto al sumar x y y debemos obtener 107*/
    x = x + y;
cout << "The value of the variable x is: " << x <<endl;
float z = x + 1.1; // x es convertida implicitamente en flotante
cout <<" The value of the variable z is: " << z<<endl<<endl;



//CONVERSIONES DE TIPO EXPLICITAS
int sum;
double x1 = 1.2;

    // Explicit conversion from double to int
    sum = (int)x1 + 1;
    cout<<" The total sum is: " << sum <<endl;

return 0;
}

// Algunos ejercicios fueron tomados de la página: https://www.geeksforgeeks.org/type-conversion-c/
