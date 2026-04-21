/*Write a C++ program that defines a Triangle class with methods to calculate its area and perimeter.
Two instances of the Triangle class are created, and their parameters are
initialized with specific side lengths. The program should calculate the area
and perimeter for both instances. Additionally, it should determine which
triangle has the greater area and print out its details. The objects are
defined as triangle1 = (8, 6, 10) and triangle2 = (6, 8, 10).

Hints:
perimeter = sum of all sides
s = perimeter() / 2
Area = s(s-side1)(s -side2)(s-side3)
*/
#include <iostream>
#include <cmath>
using namespace std;

class triangle
{
public:
    int side1;
    int side2;
    int side3;

    int perimeter()
    {
        return side1 + side2 + side3;
    }
    int area(int perimeter)
    {
        int s = perimeter / 2;
        return sqrt(s * (s - side1) * (s - side2) * (s - side3));
    }
};
int main()
{
    triangle tri1 = {8, 6, 10};
    triangle tri2 = {6, 8, 10};

    int perimeter1 = tri1.perimeter();
    int area1 = tri1.area(perimeter1);

    cout << "\nArea of triangle 1: " << area1 << endl;
    cout << "Perimeter of triangle 1: " << perimeter1 << endl;

    int perimeter2 = tri2.perimeter();
    int area2 = tri2.area(perimeter2);

    
    cout << "\nArea of triangle 2: " << area2 << endl;
    cout << "Perimeter of triangle 2: " << perimeter2 << endl;

    if (area1 > area2)
    {

        cout << "\nArea of triangle 1 is greater than 2" << endl;
    }
    else if (area2 > area1)
    {
        cout << "\nArea of triangle 2 is greater than 1" << endl;
    }
    else
    {
        cout << "\nBoth triangles have same area!" << endl;
    }
    return 0;
}