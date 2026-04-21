#include<iostream>
using namespace std;
struct car
{
    string brand;
    int year;
};

int main()
{
    car c1;

    c1.brand = "Toyota";
    c1.year = 2025;

    cout << "Car Brand: " << c1.brand << "\nCar Year: " << c1.year << endl;
    return 0;
}