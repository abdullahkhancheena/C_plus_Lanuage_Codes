/*Create a single structure to store student information, including name, ID, subject
count, and an array of scores for five subjects. In the main () function, use a pointer
to the student structure (with the arrow operator ->) for all data input and access.

Create one function, processPersonData(), to calculate the average score and display the
results for the student. Also display the second-highest score. Scores cannot be less than
0 or greater than 100.*/

#include <iostream>
#include <limits>
using namespace std;
// ========GLOBAL STRUCTURE========
struct student
{
    string name;
    int ID;
    int subjects;
    float Subject_scores[5];
};
// ========FUNCTION TO PROCESS DATA========
void processPersonData(student *ptr)
{

    cout << "Name: " << ptr->name << endl;
    cout << "ID: " << ptr->ID << endl;
    cout << "Grades: ";
    for (int i = 0; i < ptr->subjects; i++)
    {
        cout << " " << ptr->Subject_scores[i];
    }

    // CALCULATING AVERAGE SCORES
    float average_scores = 0, sum = 0;

    for (int i = 0; i < ptr->subjects; i++)
    {
        sum += ptr->Subject_scores[i];
    }
    average_scores = sum / ptr->subjects;
    cout << "\nAverage Scores: " << average_scores << endl;

    // CALCULATING SECOND HIGHEST SCORE
    float first_score = numeric_limits<float>::lowest();
    float sec_high_score = numeric_limits<float>::lowest();

    if (ptr->subjects > 1)
    {
        for (int i = 0; i < ptr->subjects; i++)
        {
            if (ptr->Subject_scores[i] > first_score)
            {
                sec_high_score = first_score;
                first_score = ptr->Subject_scores[i];
            }
            else if (ptr->Subject_scores[i] > sec_high_score && ptr->Subject_scores[i] != first_score)
            {
                sec_high_score = ptr->Subject_scores[i];
            }
        }
    }
    else
    {
        cout << "\nNo Multiple Subjects! So, No any 2nd Highest Score.";
    }

    // CHECKING IF FIRST AND SECOND ELEMENT SCORES BWCOMES EQUAL
    if (sec_high_score == numeric_limits<float>::lowest())
    {
        cout << "No Second Highest Score Found!";
    }
    else
    {
        cout << "Second Highest Score: " << sec_high_score << endl;
    }
}
// =========MAIN FUNCTION========
int main()
{
    student std;
    student *ptr = &std;

    cout << "\n===========Enter Student Details============\n";
    cout << "Enter Student Name: ";
    getline(cin, ptr->name);

    cout << "Enter Student ID: ";
    cin >> ptr->ID;

    cout << "Enter Student Subjects(1-5): ";
    cin >> ptr->subjects;

    if (ptr->subjects > 1)
    {
        cout << "\nEnter Subject Scores!" << endl;
        for (int i = 0; i < ptr->subjects; i++)
        {
            cout << "Enter scores of subject " << i + 1 << "---->(0-100): ";
            cin >> ptr->Subject_scores[i];
        }
    }
    else
    {
        cout << "\nNo Multiple Subjects! So,give one subject score: ";
        cout << "\nEnter Subject Scores: ";
        cin >> ptr->Subject_scores[0];
    }

    processPersonData(ptr);
}