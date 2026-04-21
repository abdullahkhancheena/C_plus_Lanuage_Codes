#include <iostream>
using namespace std;
class student
{
public:
    string name;
    int roll;
    float gpa;

    student(string s, int r, float g)
    {
        
        name = s;
        roll = r;
        gpa = g;
    }
};
int main()
{
    student s1("Hello", 25012, 3.9);
    student s2("Helloljkjkj", 256712, 35545.9);
    cout << "NAme: " << " " << s1.name << "Roll: " << " " << s1.roll << "GPA: " << s1.gpa << endl;
    cout << "NAme: " << " " << s2.name << "Roll: " << " " << s2.roll << "GPA: " << s2.gpa << endl;
    return 0;
}