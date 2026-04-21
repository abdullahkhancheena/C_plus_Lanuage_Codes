/*Define a structure called “car”.The member elements of the car structure are:

    string Model;
    int Year;
    float Price

Create an array of 30 cars. Get input for all 30 cars from the user. Then the
program should display complete information (Model, Year, Price) of those
cars only which are above 500000 in price.*/
#include <iostream>
using namespace std;
struct car
{
    string model;
    int year;
    float price;
};
int main()
{
    car c[30];
    // INPUT
    for (int i = 0; i < 30; i++)
    {
        cout << "\nEnter Deatils of Car " << i + 1 << ":" << endl;
        cout << "Enter Car Model: ";
        cin >> c[i].model;
        cout << "Enter Car Year: ";
        cin >> c[i].year;
        cout << "Enter Car Price: ";
        cin >> c[i].price;
    }
    // OUTPUT
    for (int i = 0; i < 30; i++)
    {
        cout << "\nDetails of Car " << i + 1 << ":" << endl;
        cout << "Car Model: " << c[i].model << endl;
        cout << "Car Year: " << c[i].year << endl;
        cout << "Car Price: " << c[i].price << endl;
    }
}
