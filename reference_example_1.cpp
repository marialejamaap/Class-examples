//Ejemplo de argumentos pasados por referencias 
#include <iostream>
#include <conio.h>
using namespace std;
int function(int &n, int &m);
int main(){
 int a,b;
 a=10;
 b=20;
 cout<<"a,b ->"<<a<<","<<b<<endl;
 cout<<"function(a,b)->"<<function(a,b)<<endl;
  cout<<"a,b ->"<<a<<","<<b<<endl; // el valor de las variables cambia ya que cambio 
                                    // el valor de sus referencias en la función n y m
  
  getch();
  return 0;

}

int function(int &n, int &m){
   n=n+2;
   m=m-5;
   return n+m;
}
