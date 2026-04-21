#include <iostream>
#include <limits>
using namespace std;
int *merged_array(int *CS_array, int cs_size, int *SE_array, int se_size)
{
    // TAKING SUM OF SIZES
    int all_size = cs_size + se_size;

    int *merge_array = new int[all_size];
    // MERGING BOTH ARRAYS
    for (int i = 0; i < cs_size; i++) // CS
    {
        merge_array[i] = CS_array[i];
    }

    for (int i = 0; i < se_size; i++) // SE
    {
        merge_array[cs_size + i] = SE_array[i];
    }

    // MERGE AND SORTED ARRAY
    for (int i = 0; i < all_size - 1; i++)
    {
        for (int j = 0; j < all_size - i - 1; j++)
        {
            if (merge_array[j] > merge_array[j + 1])
            {
                int temp = merge_array[j];
                merge_array[j] = merge_array[j + 1];
                merge_array[j + 1] = temp;
            }
        }
    }

    cout << "\nMerged and Sorted Ages: ";
    for (int i = 0; i < all_size; i++)
    {
        cout << merge_array[i] << " ";
    }

    delete[] merge_array;
    return merge_array;
}
int main()
{
    int cs, se;
    cout << "\nEnter Number of CS Students: ";
    cin >> cs;
    int *CS = new int[cs];

    cout << "Enter Number of SE Students: ";
    cin >> se;
    int *SE = new int[se];

    // TAKING AGE OF CS STUDENTS
    cout << "\nEnter Ages of CS Students: ";
    for (int i = 0; i < cs; i++)
    {
        cin >> CS[i];
    }

    // TAKING AGE OF SE STUDENTS
    cout << "\nEnter Ages of SE tudents: ";
    for (int i = 0; i < se; i++)
    {
        cin >> SE[i];
    }

    // CALLING FUNCTION FOR MERGING AND SORTING THE ARRAY
    int *merge_sorted = merged_array(CS, cs, SE, se);

    // DEALLOCATING DYNAMIC MEMORY
    delete[] CS;
    CS = NULL;
    delete[] SE;
    SE = NULL;

    return 0;
}