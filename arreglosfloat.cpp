#include <iostream>

using namespace std;
void print_array(float *array, const int size); // imprime en consola el arreglo *array (direccion del elemento),
                                                // cons int size(tamaño del arreglo)
void input_array(float *array, const int size);// funcion para ingresar los elementos (los numeros flotantes)
int main(){
int N;
    cout<<"ingrese el tamaño de su arreglo o numero de flotantes que desea ingresar: ";
          cin>>N;

float float_array[N];

input_array(float_array, N);
print_array(float_array, N);


return 0;
  }
void input_array(float *array, const int size){
  cout<<"Enter the " << size << " float numbers: " << endl;
  for(int i=0; i<size; ++i){

    cin>> *array;
    array++;
  }
}
void print_array(float *array, const int size){
    cout<<"the array is: {";
    for(int i=0; i<size; ++i){
     if (i<size-1)
         cout<<*array <<", ";
     else
         cout << *array;
      array++;  }
    cout<< "}\n";
}
