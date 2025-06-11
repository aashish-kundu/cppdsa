#include<iostream>
using namespace std;

//It will take real arr value from main function and can modify that with their address

void dosomething(int arr[], int &n) {

    // it changes the value of index 0 of arr int n

    arr[0] += 100;

    cout << "Value in function: " << arr[0] << endl;

}

int main () {

    //declare the value of int n

    int n = 1;

    // int is the size of array 

    int arr[n];

    // loop help us to input the values to the array by index 0 to n-1

    for(int i = 0; i < n ; i++ ) {
        cin >> arr[i];
    }
    
    //takes the real value and address

    dosomething(arr, n);

    //print the value in main

    cout << "Value in main: " << arr[0] << endl;

return 0;
}