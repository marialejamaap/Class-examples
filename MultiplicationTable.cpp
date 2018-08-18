#include<iostream>
#include<string>
using namespace std;
int main()
{
	int a =0 ,i=0,mult=0; //type variables
	cout<<"ingresar numero: "; // print Enter a number
	cin>> a;
	cout<< " tabla de multiplicación: \n";// project's name 
	for(i=0;i<=10;i++) //use for from i equal to 0 to 10, if i is not greater or equal to 10 then increase one unit
	{
	mult=a*i; //multiplication is equal to a by i(numbers 1 to 10)
	cout<< a << "x" << i <<"="<<mult <<endl; //print result
	}
	cin.get();
	
	
}
#include<iostream>
#include<string>
using namespace std;
int main()
{
	int a =0 ,i=0,mult=0;
	cout<<"ingresar numero: ";
	cin>> a;
	cout<< " tabla de multiplicación: \n";
	i=0;
	while(i<=10) // use while, while i is less or equal to 10 make the following statements
	{
	mult=a*i;
	cout<< a << "x" << i <<"="<<mult <<endl;// print result
	i++;//increase one unit 
	}
	cin.get();
}
