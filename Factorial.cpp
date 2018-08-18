#include<iostream>
#include<string>
using namespace std;
int main()
{
	 int a, afact, i; //type variables 
	cout << "ingrese un numero: "; // Print enter a number
	cin>>a; 
	afact=1; // factorial is 1 
do { // do statements then evaluate 
afact=afact*a; // n*(n-1)*(n-2)*(n-3)... 
a=a-1; // assigns the value to a  (n-1)--->(n-2)--->(n-3)...
}	while (a>0); // while a is greater than 0 continue 
cout<< "factorial del numero es: " <<afact ;// When a is 0 the loop ends 
}
