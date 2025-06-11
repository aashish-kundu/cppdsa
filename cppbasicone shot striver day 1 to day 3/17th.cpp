#include<iostream>
using namespace std;



// pas by refrence using integer
//declare a void function 

//It takes the real value or address of int a

void dosomething(int &a) {

    // update the vakue of a 


      a += 50;


    //print the updated or passed real vaue of a 

      cout << a << endl;

}

int main () {

    // declare the real value of int a in main function

      int a = 50;

    //it takes the real value of a and gives to the main function for updatation

      dosomething(a);

    //   it will print the updated real value and address of of int a in min function 

      cout << "Updated Real value: " << a << endl;

    return 0;
}