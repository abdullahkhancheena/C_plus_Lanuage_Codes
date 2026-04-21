#include<iostream>
using namespace std;
struct Employee{
	char name[50];
	int empID;
	float salary;
};
int main()
{
	int n;
	float total_salary = 0.0;
	float average_salary = 0.0;
	cout<<"\nEnter Number of Employees: ";
	cin>>n; 
	Employee *employees = new Employee[n];
	
	cout<<"-------------Enter Employee Details---------------"<<endl;
	for(int i = 0; i < n; i++)	
	{
		cout<<"\nEnter Details of "<<i+1<<" Employee:"<<endl;
		cout<<"Enter Employee Name: ";
		cin.ignore();
		cin.getline(employees[i].name, 50);

		cout<<"Enter Employee ID: ";
		cin>>employees[i].empID;

		cout<<"Enter Employee Salary: ";
		cin>>employees[i].salary;

		total_salary+=employees[i].salary;
	}
	//Calculating Average Salary
	average_salary = total_salary/n;
	cout<<"Employees Average Salary: "<<average_salary<<endl;

	cout<<"-------------Employees Details---------------"<<endl;
	for(int i = 0; i < n; i++)	
	{
		if(employees[i].salary >= average_salary)
		{	
			cout<<"Employee ID: "<<employees[i].empID<<endl;
			cout<<"Employee Name: "<<employees[i].name<<endl;
			cout<<"Employee Salary: "<<employees[i].salary<<endl;
		}
	}
	//Deallocating Memory
	delete[] employees;
	employees = NULL;
	
	return 0;
}
	