#include<iostream>
using namespace std;

struct date//Inner structure
{
    int day;
    int month;
};

struct person//Outer Structure
{
    string name;
    date dob;
};

int main()
{
    person p = {"Samad", {15, 8}};
    cout << "\nPerson Name: " << p.name << " ";
    cout << "\nDate of DOB: " << p.dob.day << "-" << p.dob.month << endl;
    ;
    return 0;
}