/*Write a program that implements the following using C++
struct. The program should finally display the values stored
in a phone directory (for 10 people)*/

#include <iostream>
using namespace std;

struct Address // INNER STRUCTURE
{
    string city;
    string country;
};

struct phone_direc // OUTER STRUCTURE
{
    string name;
    int phoneno;
    Address v2;
};

int main()
{
    phone_direc people[10];

    for (int i = 0; i < 10; i++) // INPUT
    {
        cout << "\nEnter Details of Contact " << i + 1 << ":" << endl;
        cout << "Enter Name: ";
        cin >> people->name;
        cout << "Enter Phone No: ";
        cin >> people->phoneno;
        cout << "Enter City:";
        cin >> people->v2.city;
        cout << "Enter Country: ";
        cin >> people->v2.country;
    }
    // OUTPUT
    for (int i = 0; i < 10; i++)
    {
        cout << "\nDetails of Contact " << i + 1 << ":" << endl;
        cout << "Name: " << people->name << endl;
        cout << "Phone No: " << people->phoneno << endl;
        cout << "City:" << people->v2.city << endl;
        cout << "Country: " << people->v2.country << endl;
    }
    return 0;
}