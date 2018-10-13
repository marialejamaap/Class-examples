#include <iostream>
using namespace std;

/*función adición que recibe dos números enteros a y b y
 retorna el valor de la suma entre ellos */
int addition (int a, int b){
    int r;
    r=a+b;
    return r;
}
/*función principal la cual envía el 5 y el 3 a la función adición y
 luego imprime en consola el valor que retorna la función, en este caso su suma*/
int main(){
cout << "Sum with functions" <<endl <<endl;
int z;
z=addition(5,3);
cout <<"The result is: " << z <<endl;
}
