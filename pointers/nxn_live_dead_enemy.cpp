#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "\nEnter Grid Size: ";
    cin >> n;

    int **grid = new int *[n];

    cout << "Enter grid Elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        grid[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            cin >> grid[i][j];
        }
    }

    // INITIAL GRID
    cout << "\n------------------------" << endl;
    cout << "Initial Grid:" << endl;
    cout << "------------------------" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << grid[i][j] << " ";
        cout << endl;
    }
    cout << "------------------------" << endl;

    // COUNT LIVE ENEMIES
    int live_enemies = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (grid[i][j] == 1)
            {
                live_enemies++;
            }
        }
    }

    // HITTING ENEMIES
    int total_hits = 0, row, col;
    while (live_enemies != 0)
    {
        cout << "Enter Index to Attack Enemy (row col): ";
        cin >> row >> col;

        if (row >= 0 && row < n && col >= 0 && col < n)
        {
            if (grid[row][col] == 1)
            {
                grid[row][col] = 0;
                total_hits++;
                live_enemies--;
            }
            else
            {
                cout << "No live enemy at that position!" << endl;
            }
        }
        else
        {
            cout << "Invalid index! Try again." << endl;
        }
    }

    // OUTPUT
    cout << "\n------------------------" << endl;
    cout << "Updated Grid:" << endl;
    cout << "------------------------" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << grid[i][j] << " ";
        cout << endl;
    }
    cout << "------------------------" << endl;
    cout << "Total Hits: " << total_hits << endl;

    // DEALLOCATING MEMORY
    for (int i = 0; i < n; i++)
    {
        delete[] grid[i];
    }
    delete[] grid;

    return 0;
}