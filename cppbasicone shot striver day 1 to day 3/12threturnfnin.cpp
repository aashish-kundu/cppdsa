#include <iostream>
#include<bits/stdc++.h>
using namespace std;

// use of return function

int sum(int num1, int num2)
{

    int num3 = num1 + num2;

    // return function return the sum of num 1 and num2

    return num3;
}

int main()
{

    int num1, num2;
    cout << "Enter num1: " << endl;
    cin >> num1;
    cout << "Enter num2: " << endl;
    cin >> num2;

    // print the sum of num1 and num 2

    cout << "Sum is: " << sum(num1, num2) << endl;

    return 0;
}