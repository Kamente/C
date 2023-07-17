#include <iostream>
using namespace std;

class Rectangle
{
public:
    int width, height;

    Rectangle(int w, int h)
    {
        height = h;
        width = w;
    }

    int calculateaArea()
    {
        return width * height;
    }
};
int main()
{
    Rectangle myRectangle(16, 17);
    int area = myRectangle.calculateaArea();
    cout << "Area: " << area << endl;
}
