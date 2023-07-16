// #include <iostream>

// using namespace std;

// int addNumbers(int a, int b)
// {
//     return a + b;
// }

// int main()
// {
//     int num1 = 2;
//     int num2 = 3;

//     int sum = addNumbers(num1, num2);

//     cout << sum << endl;
//     return 0;
// }


#include <iostream>
using namespace std;

int comparison(int num1, int num2)
{
    return num1 < num2;
}
int main()
{
    int a = 20;
    int b = 15;

    if (comparison(a, b))
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
    return 0;
}
