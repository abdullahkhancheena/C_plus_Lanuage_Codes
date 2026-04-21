/*=========Hospital Management System========
Problem Statement Develop a program for a hospital appointment
management system using nested structures.

Create the following structures:
Patient
Patient Name
Patient ID
Age

Doctor
Doctor Name
Specialization

Appointment
Patient (structure)
Doctor (structure)
Appointment Date
Consultation Fee

The program should:
Store information for 5 appointments.
Display the doctor who handled the highest number of appointments.
Calculate and display the total consultation revenue generated.*/

#include <iostream>
#include <limits>
using namespace std;
// =========PATIENT STRUCTURE=========
struct patient
{
    string patient_name;
    int patient_ID;
    int patient_age;
};
// =========DOCTOR STRUCTURE=========
struct doctor
{
    string doctor_name;
    string specialization;
};
// =========APPOINTMENT STRUCTURE=========
struct appointment
{
    patient ptnt;
    doctor dtr;
    string date;
    int consultation_fee;
};
// =========MAIN FUNCTIONS=========
int main()
{
    appointment app[5];

    // TAKING INPUT OF PATIENT FROM USER
    for (int i = 0; i < 5; i++)
    {
        cout << "\nEnter Information of Patient " << i + 1 << endl;

        cout << "\nEnter Patient Name: ";
        getline(cin, app[i].ptnt.patient_name);
        cout << "Enter Patient ID: ";
        cin >> app[i].ptnt.patient_ID;
        cout << "Enter Patient Age: ";
        cin >> app[i].ptnt.patient_age;

        // TAKING INPUT OF DOCTOR FROM USER

        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "Enter Doctor Name: ";
        getline(cin, app[i].dtr.doctor_name);
        cout << "Doctor Specialization: ";
        getline(cin, app[i].dtr.specialization);

        // TAKING INPUT OF APPOINTMENTS FROM USER
        cout << "Enter Appoinment Date: ";
        getline(cin, app[i].date);
        cout << "Enter Consultation Fee: ";
        cin >> app[i].consultation_fee;

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    // FINDING MAX APPOINTMENTS
    int max_appoin = 0;
    string top_doctor;

    for (int i = 0; i < 5; i++)
    {
        int count = 0;
        for (int j = 0; j < 5; j++)
        {
            if (app[i].dtr.doctor_name == app[j].dtr.doctor_name)
            {
                count++;
            }
        }
        if (count > max_appoin)
        {
            max_appoin = count;
            top_doctor = app[i].dtr.doctor_name;
        }
    }

    cout << "\nDoctor with Highest Appoinments: " << top_doctor << endl;
    cout << "Total Appoinments: " << max_appoin << endl;

    // FINDING CONSULTATION FEE
    int total_fee = 0;
    for (int i = 0; i < 5; i++)
    {
        total_fee += app[i].consultation_fee;
    }
    cout << "Total Consultation Fee: " << total_fee << endl;
    
    return 0;
}