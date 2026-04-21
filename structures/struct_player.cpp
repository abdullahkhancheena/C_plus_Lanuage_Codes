/*Create a structure Player with :

Player Name
Team Name
Runs

Input 5 players and display the player with highest runs.*/

#include <iostream>
#include <limits>
using namespace std;
// ==========STRUCT PLAYER=========
struct player
{
    string name;
    string team_name;
    int runs;
};
// =======MAIN FUNCTION=======
int main()
{
    player p[5];

    for (int i = 0; i < 5; i++)
    {
        cout << "\nEnter Details of Player :" << i + 1 << endl;
        cout << "Enter Player Name: ";
        cin >> p[i].name;
        cout << "Enter Player Team Name: ";
        cin >> p[i].team_name;
        cout << "Enter Player Runs: ";
        cin >> p[i].runs;
    }

    int highest_runs = numeric_limits<int>::lowest();

    for (int i = 0; i < 5; i++)
    {
        if (p[i].runs > highest_runs)
        {
            highest_runs = p[i].runs;
        }
    }
    // OUTPUT
    for (int i = 0; i < 5; i++)
    {
        if (p[i].runs == highest_runs)
        {

            cout << "\nDetail of Highest Run Player" << endl;
            cout << "Player Name: " << p[i].name << endl;
            cout << "Player Team Name: " << p[i].team_name << endl;
            cout << "Player Runs: " << p[i].runs << endl;
        }
    }
    return 0;
}