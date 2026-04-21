/*Create a structure Student with:

Name
Roll Number
Marks of 5 subjects

Find:
Total marks
Average
Highest mark
Lowest mark*/

#include <iostream>
#include <limits>
using namespace std;
struct student
{
    string name;
    int roll;
    float marks[5];
};

// MAIN FUNCTION
int main()
{
    student std;

    cout << "\nEnter Student Name: ";
    getline(cin, std.name);
    cout << "Enter Student Roll Number: ";
    cin >> std.roll;

    cout << "\nEnter Student Marks: ";
    for (int i = 0; i < 4; i++)
    {
        cout << "\nEnter Marks in Subject " << i + 1 << ":";
        cin >> std.marks[i];
    }
    float total_marks, average_marks = 0;

    for (int i = 0; i < 4; i++)
    {
        total_marks += std.marks[i];
    }
    average_marks = total_marks / 4.0;
    cout << "Average Marks: " << average_marks << endl;

    float highest_marks = numeric_limits<float>::lowest();
    float lowest_marks = numeric_limits<float>::max();

    for (int i = 0; i < 4; i++)
    {
        if (std.marks[i] > highest_marks)
        {
            highest_marks = std.marks[i];
        }
        else if (std.marks[i] < lowest_marks)
        {
            lowest_marks = std.marks[i];
        }
    }
    cout << "Highest Marks: " << highest_marks << endl;
    cout << "Lowest Marks: " << lowest_marks << endl;
    return 0;
}