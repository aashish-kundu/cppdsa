#include <iostream>
using namespace std;


// I used the &( to pass real value r address of string) 

void dosomething( string &a) {

    // update the vlaue of real string a and take the real value here for updation

    // I want to print AAshish

    a[0] = 'A';
    a[1] = 'A';
    
    // print the passed value and updated value 

    cout << a << endl;

}

int main () {

    //declare the string a

    string a = "Kashish" ;

    // passes the real value 

    dosomething(a);

    // print the real and updated value of a

    cout << "real changed value: " << a << endl;


return 0;
}

