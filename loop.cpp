// #include <iostream>

// using namespace std;
// int main()
// {
//     // for loop
//     for (int i = 1; i <= 10; i++)
//     {
//         cout << " " << i << endl;
//     }

//     cout << "---" << endl;

//     // while loop
//     int count = 0;
//     while (count < 10)
//     {
//         cout << " " << count << endl;
//         count++;
//     }
//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{

    int array[5];
    array[0] = 10;
    array[1] = 22;
    array[2] = 35;
    array[3] = 47;
    array[4] = 50;

    for (int i = 0; i < 5; i++)
    {
        cout << array[i] << endl;
    }
}
