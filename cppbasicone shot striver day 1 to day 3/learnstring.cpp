#include<iostream>
using namespace std;

int main () {

    // declare a string a and its value Aashish

 string a = "Aashish";

 //print the string a

 cout << a <<endl;
 
 //size of string a 

 int len = a.size();

 //cout size of the string a

 cout << "Size of string a: " <<len << endl;

 // change the value by the help of a[len-1] 


 a[len -1] = 'Z';

 //changed the value of last index/size 

 cout << "Real value: h," << " Changed value: " << a[len-1] << endl;

    return 0;
}