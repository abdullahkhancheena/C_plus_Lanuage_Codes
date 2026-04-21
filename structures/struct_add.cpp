#include<iostream>
using namespace std;

struct test
{
    int m1 = 15;
    int m2 = 35;
};

int main()
{
    test t;
    cout << "Test Marks are: " << t.m1 + t.m2 << endl;
    return 0;
}