#include <iostream>
#include <string.h>
using namespace std;

// example of pass by refrence

// it takes the copy of original value and print it

void dosomething(string s)
{

    // update the value of copied value
    //  it does not update real value or address of string

    s[0] = 'T';

    // print the copied or updated value

    cout << s << endl;
}

int main()
{

    string s = "Raj";

    // this function takes the copy of string s

    dosomething(s);

    // print the real value of string s

    cout << "Real value: " << s << endl;

    return 0;
}