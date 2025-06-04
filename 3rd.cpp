#include <bits/stdc++.h>
using namespace std;

int main()
{

    int age;
    // Print Enter age
    cout << "Enter Age : " << endl;
    cin >> age; // input age

    if (age < 18)
    {
        cout << "Not Eligible for Job" << endl;
    }
    else if (age <= 57)
    {
        cout << "Eligible for Job" << endl;
        if (age >= 55)
        {
            cout << "But retirement soon " << endl;
        }
    }
    else
    {
        cout << "Retirement time" << endl;
    }

    return 0;
    
}