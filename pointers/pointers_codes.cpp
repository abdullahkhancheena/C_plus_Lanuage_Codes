//=============================================================//

// ///==================BASIC OPERATIONS===============//
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a = 5;
//     int *p = &a;
//     cout << a << endl;
//     cout << &a << endl;
//     cout << p << endl;
//     cout << *p << endl;
//     return 0;
// }
/// ============================================//
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a = 10;
//     int *ptr;
//     ptr = &a;
//     cout << "Value of a is a:" <<a<< endl;
//     cout << "Address of a is:" << &a << endl;
//     cout << "Value of a is a:" << *ptr << endl;
//     cout << "Address of a is:" << ptr << endl;
//     return 0;
// }
/// ============================================//
// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[5] = {1, 2, 3, 4, 5};
//     int *p = arr;
//     cout << "Initial Pointer p =" << p << endl;
//     cout << "Value at p = " << *p << endl;
//     //++operator
//     p++;
//     cout << "After p++:" << endl;
//     cout << "p = " << p << endl;
//     cout << "*p = " << *p << endl;
//     //--operator
//     p--;
//     cout << "After p--:" << endl;
//     cout << "p = " << p << endl;
//     cout << "*p = " << *p << endl;
//     // p+2
//     p + 2;
//     cout << "After p+2:" << endl;
//     cout << "p = " << p << endl;
//     cout << "*p = " << *p << endl;
//     // p-1
//     p - 1;
//     cout << "After p-1:" << endl;
//     cout << "p = " << p << endl;
//     cout << "*p = " << *p << endl;
// }
/// ============================================//
// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[5] = {1, 2, 3, 4, 5};
//     int *ptr = arr;
//     for (int i = 0; i < 5; i++)
//     {
//         cout << "*p = " << *ptr + i << endl;
//     }
//     return 0;
// }
/// ============================================//
// #include <iostream>
// using namespace std;
// void swap(int *a, int *b)
// {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }
// int main()
// {
//     int a = 10, b = 20;
//     cout << "Values before swap:" << endl;
//     cout << "a = " << a << endl;
//     cout << "b = " << b << endl;
//     swap(&a, &b);
//     cout << "Values after swap:" << endl;
//     cout << "a = " << a << endl;
//     cout << "b = " << b << endl;
// }
/// ==============================================//
// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
//     int *ptr = arr;

//     cout << "Original Array:" << endl;
//     for (int i = 0; i < 9; i++)
//     {
//         cout << *(ptr + i)<<" ";
//     }
//     cout << "\nReverse Array:" << endl;
//     for (int i = 8; i >= 0; i--)
//     {
//         cout << *(ptr + i)<<" ";
//     }
//     return 0;
// }
/// ==============================================//
// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     int *ptr = arr;
//     int sum = 0;
//     for (int i = 0; i < 10; i++)
//     {
//         sum = sum + *(ptr + i);
//     }
//     cout << "Sum of Array is: " << sum << endl;
//     return 0;
// }
/// ==============================================//
// #include <iostream>
// using namespace std;
// int func(int *a, int *b)
// {
//     int sum = *a + *b;
//     return sum;
// }
// int main()
// {
//     int a = 10, b = 10;
//     int sum;
//     sum = func(&a, &b);
//     cout << "Sum is:" << sum << endl;
//     return 0;
// }
/// ==============================================//
// #include <iostream>
// using namespace std;
// int main()
// {
//     int v1 = 99;
//     int *p1;
//     p1 = &v1;
//     cout << v1 << endl;
//     cout << &v1 << endl;
//     cout << p1 << endl;
//     cout << *p1 << endl;
//     return 0;
// }
////=============================//

///==========================================DYNAMIC MEMORY ALLOCATION=========================================//
// #include <iostream>
// using namespace std;
// int main()
// {
//     int *p = new int(25);
//     float *q = new float(25);
//     char *ch = new char[5]{'a', 'b', 'c', 'd', 'e'};
//     delete p;
//     delete q;
//     delete[] ch;
//     return 0;
// }

/// ==========================
// #include <iostream>
// using namespace std;
// int main()
// {
//     int *p = new (nothrow) int(9);
//     int *q = p;

//     cout << "p = " << *p << endl;
//     cout << "q = " << *q << endl;
//     *q = 10;
//     cout << "p = " << *p << endl;
//     cout << "q = " << *q << endl;
//     delete q;
//     return 0;
// }
///===============================================//

/// ===================================================MEMORY LEAKS====================================================//
// #include <iostream>
// using namespace std;
// int main()
// {

//     int *p;
//     p = new int;
//     // Make the above space unreachable; How?
//     p = new int;

//     while (1)
//     {
//         p = new int;
//     }

//     return 0;
// }
/////==============================================//

// ////===========(1)Functions pass by value===========//
// #include <iostream>
// using namespace std;
// void func(int p)
// {
//     p++;
//     cout << "\nValue of p = " << p << endl;
//     cout << "Address of p = " << &p << endl;
// }
// int main()
// {
//     int a = 10;
//     cout << "\nValue of a = " << a << endl;
//     cout << "Address of a = " << &a << endl;

//     func(a);

//     cout << "\nAfter update" << endl;
//     cout << "Value of a = " << a << endl;
//     cout << "Address of a = " << &a << endl;
//     return 0;
// }
/// //===============================================//

///==========(2)Functions [pass by reference with & operator]========//
// #include <iostream>
// using namespace std;
// void func(int &p)
// {
//     p++;
//     cout << "\nValue of p = " << p << endl;
//     cout << "Address of p = " << &p << endl;
// }
// int main()
// {
//     int a = 10;
//     cout << "\nValue of a = " << a << endl;
//     cout << "Address of a = " << &a << endl;

//     func(a);

//     cout << "\nAfter update" << endl;
//     cout << "Value of a = " << a << endl;
//     cout << "Address of a = " << &a << endl;
//     return 0;
// }
/////======================================================//

//////=========Swaping two numbers and findinmg mean range normalization===========//
// #include <iostream>
// using namespace std;

// //==============Function of swaping===================
// void swap(int *p1, int *p2)
// {
//     int temp = *p1;
//     *p1 = *p2;
//     *p2 = temp;
// }
// //============Function of Range===========
// void rangefunc(int *a, int *b, int *range)
// {
//     *range = *a - *b;
// }
// //============Function of Mean===========
// void meanfunc(int *a, int *b, int *mean)
// {
//     *mean = (*a + *b) / 2.0;
// }
// //============Function of Normalization===========
// void normalization(int *a, int *b)
// {
//     cout << "Normalization of first Number = " << (*a) / (*a) << endl;
//     cout << "Normalization of first Number = " << (*b) / (*b) << endl;
// }
// int main()
// {
//     int a, b;
//     cout<<"Input:";
//     cout << "\nEnter First Value = ";
//     cin >> a;
//     cout << "Enter second Value = ";
//     cin >> b;
//     cout<<"Output:"<<endl;
//     cout << "Values before swap:" << endl;
//     cout << "a = " << a << endl;
//     cout << "b = " << b << endl;

//     //==========Calling SwapFunctin==========
//     swap(&a, &b);
//     cout << "Values after Swaping:" << endl;
//     cout << "a = " << a << endl;
//     cout << "b = " << b << endl;

//     //==========Calling of Range==========
//     int range = 0;
//     rangefunc(&a, &b, &range);
//     cout << "Range = " << range << endl;
//     //==========Calling of Mean==========//
//     int mean;
//     meanfunc(&a, &b, &mean);
//     cout << "Mean = " << mean << endl;

//     //==========Calling SwapFunction==========
//     normalization(&a, &b);
//     return 0;
// }
//// //========================================================//

/// //==============================================Finding total marls and percentage============================/
// #include<iostream>
// using namespace std;
// //=========FUNCTION OF TOTAL MARKS====//
// void marksfunc(int *sub1,int *sub2,int *sub3,int *totalmarks)
// {
// 	*totalmarks = *sub1+*sub2+*sub3;
// }
// //=========FUNCTION OF PERCENTAGE====//
// void percentagefunc(int *totalmarks,float *percentage)
// {
// 	*percentage = (*totalmarks/300.0) * 100;
// }
// //===============MAIN FUNCATION===========//
// int main()
// {
// 	//Declaring subjects
// 	int sub1,sub2,sub3;
// 	cout<<"Input:\n";
// 	cout<<"Enter Marks of Subject 1 = ";
// 	cin>>sub1;
// 	cout<<"Enter Marks of Subject 2 = ";
// 	cin>>sub2;
// 	cout<<"Enter Marks of Subject 3 = ";
// 	cin>>sub3;
// 	cout<<"Output:\n";

// //=========CALLING MARKS FUNCTIONS========//
// 	int totalmarks;
// 	marksfunc(&sub1,&sub2,&sub3,&totalmarks);
// 	cout<<"Total Marks = "<<totalmarks<<endl;

// //=========CALLING PERCENTAGE FUNCTION=====//
// 	float percentage;
// 	percentagefunc(&totalmarks,&percentage);
// 	cout<<"Percentage = "<<percentage<<"%%"<<endl;
// 	return 0;
// }
/// ///==================================================//

///=====================================================Double POinters======================================================//
// #include <iostream>
// using namespace std;
// void func(int *a, int *b, int **result)
// {
//     // just we want greater value
//     if (*a > *b)
//     {
//         **result = *a;
//     }
//     else
//     {
//         **result = *b;
//     }
// }
// int main()
// {
//     int temp = 0;
//     int *ptr = &temp;
//     int a = 10;
//     int b = 20;
//     cout << "Before function call temp value = " << temp << endl;
//     cout << "Before function call *ptr value = " << *ptr << endl;
//     func(&a, &b, &ptr);
//     cout << "\n";
//     cout << "After function call temp value = " << temp << endl;
//     cout << "Before function call *ptr value = " << *ptr << endl;
//     return 0;
// }
/////////===============================================//
// #include <iostream>
// using namespace std;
// int* func(int length)
// {
//     // we want dynamic array
//     int *ptr = new int[length];
//     for (int i = 0; i < length; i++)
//     {
//         *(ptr+i) = (i + 1);
//     }
//     return ptr;
// }
// int main()
// {
//     int size;
//     cout << "Enter Size = ";
//     cin >> size;
//     int *recieved_arr = func(size);
//     for (int i = 0; i < size; i++)
//     {
//         cout << "value stored in other function = " << *(recieved_arr+1) << endl;
//     }
//     delete[] recieved_arr;
//     recieved_arr = NULL;
//     return 0;
// }
/////////===============================================//
// #include <iostream>
// using namespace std;
// void print(int *arr, int m, int n)
// {
//     for (int i = 0; i < m; ++i)
//     {
//         for (int j = 0; j < n; ++j)
//         {
//             cout << *(arr + i * n + j) << " ";
//         }
//         cout << endl;
//     }
// }
// int main()
// {
//     int arr[3][3] = {{1, 2, 3},{4, 5, 6},{7, 8, 9}};
//     int m = 3, n = 3;
//     print(&arr[0][0], m, n);

//     return 0;
// }
////===================================================//
// #include <iostream>
// using namespace std;

// void print(int arr[][3], int m)
// {
//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
// }

// int main()
// {
//     int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
//     print(arr, 3);
//     return 0;
// }
//////================================================//
// #include <iostream>
// using namespace std;

// void print(int arr[3][3])
// {
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
// }

// int main()
// {
//     int arr[3][3] = {{1, 2, 3},{4, 5, 6},{7, 8, 9}};
//     print(arr);
//     return 0;
// }
//////================================================//
// #include <iostream>
// using namespace std;

// int main()
// {
//     int x = 10;
//     char c = 'A';

//     void *vp;
//     vp = &x;
//     cout << "Int : " << *(int *)vp << endl;
//     vp = &c;
//     cout << "Char " << *(char *)vp << endl;

//     return 0;
// }
//////================================================//

/////=================Find the Maximum and Minimum value in array using pointer===================//
// #include<iostream>
// #include<climits> //for checking maximum and minimum numbers without any errors
// using namespace std;
// int main()
// {
//     int arr[9] = {4, 7, 3, 9, 4, 7, 9, 4, 6};
//     int *ptr = arr;
//     int maximum = INT_MIN, minimum = INT_MAX;
//     for (int i = 0; i < 9; i++)
//     {
//         if (*(ptr + i) > maximum)
//         {
//             maximum = *(ptr + i);
//         }
//         if (*(ptr + i)< minimum)
//         {
//             minimum = *(ptr + i);
//         }
//     }
//     cout << "Maximum Value in Array is:" << maximum << endl;
//     cout << "Minimum Value in Array is:" << minimum << endl;
//     return 0;
// }
//////================================================//

/////=================Find the Maximum and 2nd Maximum value in array using pointer===================//
// #include <iostream>
// #include <climits> //for checking maximum and minimum numbers without any errors
// using namespace std;
// int main()
// {
//     int arr[9] = {4, 7, 3, 9, 4, 7, 9, 4, 6};
//     int *ptr = arr;
//     int maximum = INT_MIN, second_max = 0;
//     for (int i = 0; i < 9; i++)
//     {
//         if (*(ptr + i) > maximum)
//         {
//             second_max = maximum;
//             maximum = *(ptr + i);
//         }
//         else
//         if (*(ptr + i) > second_max && *(ptr+i) != maximum)
//         {
//             second_max = *(ptr + i);
//         }
//     }
//     cout << "Maximum Value in Array is:" << maximum << endl;
//     cout << "Second Maximum Value in Array is:" << second_max << endl;
//     return 0;
// }
////================================================================//
#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    int *ptr = arr;
    
    cout << "Enter Array\n";
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter Array in Index " << i<<": ";
        cin >> *(ptr + i);
    }
    for (int i = 0; i < 5; i++)
    {
        cout<<  *(ptr + i)<<" ";
    }
    return 0;
}