#include <iostream>
using namespace std;


//Inbuilt functions 

int maxValue(int num1, int num2)
{

      cout << "Greater Num: " << endl;

    if (num1 >= num2)
    {
        return num1;
    }
    else
    {
        return num2;
    }

}
  
int main()
{

    int num1, num2;

    cin >> num1 >> num2;

    int maximum = maxValue(num1, num2);

    cout << maximum << endl;

    return 0;
}