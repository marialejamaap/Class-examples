#include <iostream>
#include <string>
int main()
{
  float a,b,c; // type variables
  std::cout<<"Ingrese tres numeros: \n";// print  "enter three numbers"
  std::cin>> a >> b >>c; 
  if (a>=b && a>=c) // use conditional if 
  	std::cout <<"El mayor es: "<<a; //if a is greater or equal to b and c print largest is a 
 if(b>a && b>=c) // if b is greater than a and b is greater or equal to c print largest is b 
std::cout<<"el mayor es: " <<b ;
if(c>a && c>b) // if c is greater than a and b print largest is c 
	std::cout<<"el mayor es: " <<c;
  // as it was already equaled in the previous conditionals it is not necessary to equalize in the following
	std::cin.get(); // end with enter
}
// Class 18/08/2018
