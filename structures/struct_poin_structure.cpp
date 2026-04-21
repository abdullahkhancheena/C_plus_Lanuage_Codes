#include<iostream>
using namespace std;

struct student
{
    string name;
    int age;
};

int main()
{
    student s = {"Ahmar", 15};
    student *ptr = &s;

    cout << "\nStudent: " << s.name << " " << s.age << endl;
    return 0;
}