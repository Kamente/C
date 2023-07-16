#include <iostream>
using namespace std;

int main()
{
    int num1 = 8;
    int num2 = 12;
    int num3 = 3;
    int max = num1;

    if (num2 > max)
    {
        max = num2;
    }
    if (num3 > max)
    {
        max = num3;
    }
    cout << max << endl;

    return 0;
}

//data types: int, float, double, char, boolean
// 