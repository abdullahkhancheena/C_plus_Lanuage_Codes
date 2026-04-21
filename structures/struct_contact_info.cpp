#include <iostream>
using namespace std;
// ===============STRUCTURES===============
struct Address // Nested structure for Address
{
    string city;
    string country;
};
struct Contact_Info // CONTACT STRUCTURES
{
    string name;
    string phone_no;
    Address addr; // Nested structure
};
int main()
{
    Contact_Info person[10]; // Array for 10 people
    // INPUT
    for (int i = 0; i < 10; i++)
    {
        cout << "\nEnter details for person " << i + 1 << endl;
        cout << "Enter Full Name: ";
        cin.ignore();
        getline(cin, person[i].name);

        cout << "Enter Phone Number: ";
        getline(cin, person[i].phone_no);

        cout << "Enter City: ";
        getline(cin, person[i].addr.city);

        cout << "Enter Country: ";
        getline(cin, person[i].addr.country);
    }
    // OUTPUT
    cout << "\n\n=====CONTACT INFORMATION=====\n";
    for (int i = 0; i < 10; i++)
    {
        cout << "\nPerson " << i + 1 << endl;
        cout << "Name: " << person[i].name << endl;
        cout << "Phone No: " << person[i].phone_no << endl;
        cout << "City: " << person[i].addr.city << endl;
        cout << "Country: " << person[i].addr.country << endl;
    }
    return 0;
}
