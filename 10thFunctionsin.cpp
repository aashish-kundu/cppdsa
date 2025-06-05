#include <iostream>
using namespace std;

// void
// return
// parametrised
// non - parametrised

// Functions increases reusability of code

void printName(string name)
{

    cout << "Hey " << name << endl;
}
int main()
{

    string name;

    cin >> name;

    printName(name);

    string name2;

    cin >> name2;

    printName(name2);

    string name3;

    cin >> name3;

    printName(name3);

    return 0;
}
