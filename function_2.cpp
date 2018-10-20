// Example 2 sum of two numbers using function 
// La función puede estar en cualquier lugar pero siempre debe estar declarada al comienzo del programa, ejemplo:  
#include <iostream>
#include <string>

using namespace std;
int addition (int a, int b);
int main(){
	int z;
	z=addition(5,3);
	cout<<"sum a and b is: " << z;
}
int addition (int a, int b){
	int r;
	r=a+b;
	return r;
}
