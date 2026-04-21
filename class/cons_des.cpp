#include <iostream>
using namespace std;
class A
{
private:
    string name;

public:
    A()
    {
        cout << "Default Contructor Called!" << endl;
    }
    A(string n)
    {

        name = n;
        cout << "Parametarized Constructor Called!" << endl;
    }
    ~A()
    {
        cout << "Object Destroyed!" << endl;
    }
};
int main()
{
    A a;
    A a1("Ali");
    return 0;
}