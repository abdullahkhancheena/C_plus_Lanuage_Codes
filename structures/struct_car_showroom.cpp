
/*Define a structure called “Car” in global scope.The member elements of the car
structure are :

1. string Model;
2. int Year;
3. float Price

▶ Create an array of 3 cars called showroom. Get input for all 3 cars from the user.
Then the program should display complete information (Model, Year, Price)
of thosecars only which are above 500,000 in price.*/

#include <iostream>
using namespace std;
struct showroom
{
    string model;
    int year;
    float price;
};
// ================MAIN FUNCTION=============
int main()
{
    showroom cars[3];

    // TAKING CAR  DETAILS FROM USER
    for (int i = 0; i < 3; i++)
    {
        cout << "\nEnter Deatils of car: " << i + 1 << endl;
        cout << "Enter Car Name: ";
        cin >> cars[i].model;
        cout << "Enter Car Year: ";
        cin >> cars[i].year;
        cout << "Enter Car Price: ";
        cin >> cars[i].price;
    }

    // CARS WITH ABOVE PRICES FROM 500,000
    cout << "\nDetails of cars with 500,000 above prices!" << endl;
    for (int i = 0; i < 3; i++)
    {
        if (cars[i].price > 500000)
        {
            cout << "\nCar Name: " << cars[i].model << endl;
            cout << "Car Year: " << cars[i].year << endl;
            cout << "Car Price: " << cars[i].price << endl;
        }
    }
    return 0;
}