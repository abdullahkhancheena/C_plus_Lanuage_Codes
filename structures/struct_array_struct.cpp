#include<iostream>
using namespace std;
struct employee
{
    string name;
    int salary;
};

int main()
{
    employee emp[2] = {{"Asfand", 30000},{"Sahil", 50000}};

    cout <<"Employee 1:" << emp[0].name<<" "<< emp[0].salary << endl;
    cout <<"Employee 2:" << emp[1].name<<" "<< emp[1].salary << endl;
    return 0;
}
