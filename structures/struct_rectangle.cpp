#include <iostream>
using namespace std;

struct rectangle
{
    int length;
    int width;
};

int area(rectangle r)
{
    return r.length * r.width;
}

int main()
{
    rectangle rect = {5, 4};
    cout <<"\nArea of Rectangle is: "<< area(rect) << endl;
    return 0;
}