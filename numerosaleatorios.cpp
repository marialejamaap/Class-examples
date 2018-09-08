#include <iostream>
#include <stdlib.h>
#include <time.h>


using namespace std;

int main(){
    int number, i, N=100 ;

 srand(static_cast<unsigned>(time(nullptr)));
cout<< "the random number is: " <<endl;
    for (i=0; i<=N;i++){
        number=rand()%100-51;
         cout << number << endl;
    }

   return 0;



}
