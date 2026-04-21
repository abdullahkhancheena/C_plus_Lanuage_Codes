#include<iostream>
using namespace std;
struct book
{
    string title;
    float price;
};

int main()
{
    book b1 = {"C++", 500};
    book b2 = {"AI", 1000};

    cout << "\nBook 1:\n";
    cout << b1.title << endl;
    cout << b1.price << endl;

    cout << "\nBook 2:\n";
    cout << b2.title << endl;
    cout << b2.price << endl;
    return 0;
}