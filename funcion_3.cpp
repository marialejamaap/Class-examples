// resta de dos numeros con funciones
#include <iostream>

using namespace std;

int subtraction (int a , int b); // declarar la variable
int main()
{
int x=5, y=3, z;
z=subtraction(7,2);
cout<<" The first result is: "<<z<<'\n';//imprime  z resta entre 7 y 2, z definida en línea anterior
cout<<" The second result is: "<<subtraction(7,2)<<'\n'; // resta entre 7 y 2, imprime directamente lo que retorna la función
cout<<" The third result is: "<<subtraction(x,y)<<'\n';//resta entre x y y
z=4+subtraction(x,y);// resta entre x y y, al valor resultante le suma 4
cout<<" The fourth result is: "<<z<<'\n'; //imprime z, definida en línea anterior

return 0;
}

int subtraction(int a, int b){ // definir la función
  int r;
  r=a-b;
  return r;// retorna un entero, resultado de la resta entre valores enviados
            // enviados a 'a' y 'b'

}
