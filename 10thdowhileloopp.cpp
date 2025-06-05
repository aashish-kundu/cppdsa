#include<iostream>
using namespace std;

int main (){

    //want to print my name with the table of 9

int i = 0;

// Isme yar pehle jo krna h vo likho bad me condition

do{
    cout << "Aashish kundu " << i << endl;
    i = i + 9;
}
while(i <= 90);

// print last value of i maybe 99 

cout << i << endl;

    return 0;
}