#include <iostream>
using namespace std;

struct mobile
{
    string name;
    double price;
    int resolution;
    int aperture;
};

int main()
{
    int n;
    cout << "\nEnter Number of Mobiles: ";
    cin >> n;

    mobile *mbl = new mobile[n];

    for (int i = 0; i < n; i++)
    {
        cout << "\nMobile: " << i + 1 << endl;
        cout << "Enter Mobile Name: ";
        cin.ignore();
        getline(cin, mbl[i].name);
        cout << "Enter Mobile Price: ";
        cin >> mbl[i].price;
        cout << "Enter Mobile Resolution(MP): ";
        cin >> mbl[i].resolution;
        cout << "Enter Mobile Aperture: ";
        cin >> mbl[i].aperture;
    }

    // OUTPUT
    cout << "\nMobiles with Resolution >= 1200 MP" << endl;
    for (int i = 0; i < n; i++)
    {
        if (mbl[i].resolution >= 1200)
        {
            cout << "Mobile Name: " << mbl[i].name << endl;
            cout << "Mobile Price: " << mbl[i].price << endl;
            cout << "Mobile Resolution: " << mbl[i].resolution << endl;
            cout << "Mobile Aperture: " << mbl[i].aperture << endl;
        }
    }
    return 0;
}