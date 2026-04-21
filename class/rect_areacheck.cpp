/*Write a C++ program that implements a Rectangleclass with methods to calculate 
its area and perimeter. Two objects of the
Rectangle class are created, and their members are initialized with specific
lengths and widths.for rectangle1 (l=8 w=8)for rectngle2(length =16 width =4).
The program should calculate the area and perimeter for
both instances. Additionally, it should determine which rectangle has the
greater area.
*/
#include <iostream>
using namespace std;

class rectangle
{
public:
    int length;
    int width;

    int area()
    {
        return length * width;
    }
    int perimeter()
    {
        return 2 * (length + width);
    }
};
int main()
{
    rectangle rect1 = {8, 8};
    rectangle rect2 = {16, 4};

    int area1 = rect1.area();
    int perimeter1 = rect1.perimeter();

    cout << "\nArea of Rectangle 1:" << area1 << endl;
    cout << "Perimeter of Rectangle 1:" << perimeter1 << endl;

    int area2 = rect2.area();
    int perimeter2 = rect2.perimeter();

    cout << "\nArea of Rectangle 2:" << area2 << endl;
    cout << "Perimeter of Rectangle 2:" << perimeter2 << endl;

    int greater_rect;
    if (area1 > area2)
    {
        cout << "\nArea of Rectangle 1 is greater than 2" << endl;
    }
    else if (area1 < area2)
    {
        cout << "\nArea of Rectangle 2 is greater than 1" << endl;
    }
    else
    {
        cout << "\nBoth Rectangles have same area!" << endl;
    }
    return 0;
}