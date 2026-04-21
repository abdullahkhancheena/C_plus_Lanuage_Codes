#include <iostream>
using namespace std;
//============NESTED STRUCTURE============
struct megapixels
{
    int mega;
};
//============MOBILE STRUCTURE============
struct mobile
{
    float price;
    megapixels mp;
};
//======DISPLAY FUNCTION======
void displayfunc(mobile mbl[], int size)
{
    cout << "\n======All Mobiles=======";
    for (int i = 0; i < size; i++)
    {
        cout << "\n===== Mobile: " << i + 1 << " =====" << endl;
        cout << "Megapixels = " << mbl[i].mp.mega << endl;
        cout << "Price = " << mbl[i].price << endl;
    }
}
//=====EXPENSIVE FUCNTION======
void expensivefunc(mobile mbl[], int size)
{
    float highest_price = mbl[0].price;
    for (int i = 0; i < size; i++)
    {
        if (mbl[i].price > highest_price)
        {
            highest_price = mbl[i].price;
        }
    }
    cout << "\nMost Expensive Price: " << highest_price << endl;
}
//======HIGHEST CAMERA MEGAPIXEL======
void highmega(mobile mbl[], int size)
{
    int highest_megapixel = mbl[0].mp.mega;
    for (int i = 0; i < size; i++)
    {
        if (mbl[i].mp.mega > highest_megapixel)
        {
            highest_megapixel = mbl[i].mp.mega;
        }
    }
    cout << "Highest Camera MP: " << highest_megapixel << endl;
}
//======AVERAGE PRICE FUNCTION======
void averageprice(mobile mbl[], int size)
{
    float sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + mbl[i].price;
    }
    float average;
    average = sum / (float)size;
    cout << "Average Mobile Price: " << average << endl;
}
//======MP >= 50 FUNCTION======
void counting_MP(mobile mbl[], int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (mbl[i].mp.mega >= 50)
        {
            count++;
        }
    }
    cout << "Mobiles with Camera >= 50: " << count << endl;
}
//==================MAIN FUNCTION===============
int main()
{
    mobile mbl[5];
    // taking mobile input
    for (int i = 0; i < 5; i++)
    {
        cout << "\nEnter Details of Mobile " << i + 1 << endl;
        cout << "Enter Megapixels(>0): ";
        cin >> mbl[i].mp.mega;
        cout << "Enter Price(>=0): ";
        cin >> mbl[i].price;
    }
    //======CALLING DISPLAY FUNCTION=====
    displayfunc(mbl, 5);
    //======CALLING EXPENSIVE FUCNTION======
    expensivefunc(mbl, 5);
    //======CALLING HIGHEST CAMERA MEGAPIXELS FUNCTION======
    highmega(mbl, 5);
    //======CALLING AVERAGE PRICE FUNCTION======
    averageprice(mbl, 5);
    //======CALLING MP >= 50 FUNCTION======
    counting_MP(mbl, 5);
    return 0;
}