#include <iostream>
using namespace std;

void doSomething(int num)
{

    // copy of real num

    cout << num << endl;

    // adding 5 in 100

    num += 5;

    cout << num << endl;

    // adding 10 in 105

    num += 10;

    cout << num << endl;
}

int main()
{

    int num = 100;

    // it takes copy of 100 it will modify and create new but cant change real num or address

    doSomething(num);

    // it will print the real value it can not changed

    cout << num << endl;

    return 0;
}