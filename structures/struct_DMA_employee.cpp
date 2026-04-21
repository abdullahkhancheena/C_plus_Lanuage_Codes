/*Write a C++ program that dynamically allocates an array of 10 Employees structures.
Each Employee should have a emp_id,name, age, and an Address structure containing,
country and state structure containing name ,city.

---->Take input for all 10 persons using pointers.
---->Print only the count of the employee whose city is "Islamabad".

At the end free the allocated memory in such a way there is no memory leakage
problem.*/

#include <iostream>
using namespace std;

struct State // INNER STRUCUTRE
{
    string state_name;
    string city;
};

struct Address // INNER STRUCTURE
{
    string country;
    State state;
};

struct Employee // OUTER STRUCTURE
{
    int ID;
    string name;
    int age;
    Address address;
};

int main()
{
    Employee *emp = new Employee[10]; // ALLOCATING DYNAMIC MEMORY

    for (int i = 0; i < 10; i++) // INPUT
    {
        cout << "\nEnter Details of Employee " << i + 1 << ":" << endl;
        cout << "Enter Employee ID: ";
        cin >> (emp + i)->ID;
        cout << "Enter Employee Name: ";
        cin >> (emp + i)->name;
        cout << "Enter Employee Age: ";
        cin >> (emp + i)->age;
        cout << "Enter Employee Country: ";
        cin >> (emp + i)->address.country;
        cout << "Enter Employee State: ";
        cin >> (emp + i)->address.state.state_name;
        cout << "Enter Employee City: ";
        cin >> (emp + i)->address.state.city;
    }

    int ISB_count = 0;
    for (int i = 0; i < 10; i++) // OUTPUT
    {
        if ((emp + i)->address.state.city == "Islamabad" || (emp + i)->address.state.city == "islamabad")
        {
            ISB_count++;
        }
    }
    cout << "Employee from ISb are: " << ISB_count << endl;

    delete[] emp; // DEALLOCATION OF MEMORY
    return 0;
}