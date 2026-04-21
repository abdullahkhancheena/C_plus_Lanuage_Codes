#include <iostream>
#include <limits>
using namespace std;
// =========SUBJECTS STRUCTURE=========
struct Subjects
{
    string subject_name;
    float marks_obtained;
};
// =========SEMESTER STRUCTURE=========
struct Semester
{
    int semester_number;
    Subjects subjects[6];
    float semester_GPA;
};
// ==========STUDENT STRUCTURE==========
struct Student
{
    string name;
    int ID;
    Semester semester[8];
    float overall_CGPA;
};
// ==========MAIN FUNCTION=========
int main()
{
    Student student;
    cout << "------------------------------------------------" << endl;
    cout << "------------Semesters Record Manager------------" << endl;
    cout << "------------------------------------------------" << endl;
    // TAKING STUDENT DETAILS
    cout << "Enter Student Name: ";
    cin.ignore();
    getline(cin, student.name);
    cout << "Enter Student ID: ";
    cin >> student.ID;

    // TAKING SEMESTER DETAILS
    int semesters;
    cout << "Enter Semester Number: ";
    cin >> semesters;

    // TAKING SUBJECT MARKS
    for (int i = 0; i < semesters; i++)
    {
        cout << "\nEnter Semester " << i + 1 << " Details." << endl;
        float total_marks = 0;

        // TAKING SEMESTER GPA
        for (int j = 0; j < 6; j++)
        {
            cout << "Subject " << j + 1 << endl;
            cout << "Enter Subject Name: ";
            cin.ignore();
            getline(cin, student.semester[i].subjects[j].subject_name);
            cout << "Enter Marks: ";
            cin >> student.semester[i].subjects[j].marks_obtained;

            total_marks += student.semester[i].subjects[j].marks_obtained;
        }
        student.semester[i].semester_GPA = (total_marks / 6) / 25;
    }

    // CALCULATING OVRALL CGPA
    float smes_gpa = 0;

    for (int i = 0; i < semesters; i++)
    {
        smes_gpa += student.semester[i].semester_GPA;
    }
    student.overall_CGPA = smes_gpa / semesters;
    cout << "CGPA: " << student.overall_CGPA << endl;

    // FINDING HIGHEST MARKS
    float highest_marks = numeric_limits<float>::lowest();
    int smes_index, sub_index;
    for (int i = 0; i < semesters; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (student.semester[i].subjects[j].marks_obtained > highest_marks)
            {
                highest_marks = student.semester[i].subjects[j].marks_obtained;
                sub_index = j;
                smes_index = i;
            }
        }
    }

    // STUDENT DETAILS
    cout << "Student Name: " << student.name << endl;
    cout << "Student ID: " << student.ID << endl;
    for (int i = 0; i < semesters; i++)
    {
        cout << "\nSemester Number\t" << i + 1 << endl;
        cout << "----------------------------------" << endl;

        cout << "Subjects Name\t\t" << "Marks" << endl;
        cout << "----------------------------------" << endl;

        for (int j = 0; j < 6; j++)
        {
            cout << student.semester[i].subjects[j].subject_name << "\t\t\t" << student.semester[i].subjects[j].marks_obtained << endl;
        }
        cout << "----------------------------------" << endl;
        cout << "Semester GPA: " << student.semester[i].semester_GPA << endl;
        cout << "----------------------------------" << endl;
    }
    cout << "Overall CGPA: " << student.overall_CGPA << endl;
    cout << "----------------------------------" << endl;

    // SUBJECT WITH HIGHEST MARKS
    cout << "Semester Number" << student.semester[smes_index].semester_number << endl;
    cout << "Highest Marks Subject: " << student.semester[smes_index].subjects[sub_index].subject_name << endl;
    cout << "Highest Mark in Subject: " << student.semester[smes_index].subjects[sub_index].marks_obtained << endl;
    cout << "---------------------------------------------------" << endl;

    return 0;
}
