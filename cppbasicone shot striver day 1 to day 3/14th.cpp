#include<iostream>
using namespace std;

// it will take the real value or address of num 

void doSomething(int &num)
 {

    // print the real value 

    cout << "Initial value: " << num << endl;

    num *= 5;

    cout << "Muliply by 5: " << num << endl;

    num /= 5;

    cout << "Divide by 5: " << num << endl;


}

int main ()
 {

    int num ;

    cout << "Enter Num: " << endl;

    cin >> num;

    // it takes the real value or address of num  

    doSomething(num);

    return 0;
}