#include <iostream>
using namespace std;

int main()
{

    // I want to print Aashish with table of 10

    int i = 10;

    // give the condition

    while (i <= 100)
    {

        // print accordint to the condition

        cout << "Aashish " << i << endl;

        // update in i

        i = i + 10;
    }

    // print the last value of i
    cout << i << endl;

    return 0;
}