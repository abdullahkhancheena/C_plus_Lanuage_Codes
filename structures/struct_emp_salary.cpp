/*Employee Record with Net Salary Calculation*/

#include <iostream>
using namespace std;
struct employee
{
    string name;
    int ID;
    float basic_salary;
};

void calculateNetSalary(employee &emp)
{
    if (emp.basic_salary > 60000)
    {
        emp.basic_salary -= emp.basic_salary * 0.05;
    }
}
int main()
{
    employee emp;

    cout << "\nEnter Employee Name: ";
    getline(cin, emp.name);
    cout << "Enter Employee ID: ";
    cin >> emp.ID;
    cout << "Enter Basic Salary: ";
    cin >> emp.basic_salary;

    calculateNetSalary(emp);

    cout << "\nName: " << emp.name << endl;
    cout << "ID: " << emp.ID << endl;
    cout << "Net Salary After Decduction of Tax: " << emp.basic_salary << endl;
    return 0;
}