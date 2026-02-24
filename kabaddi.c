#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    string team1, team2;
    int score1 = 0, score2 = 0;
    int rounds;

    cout << "===== KABADDI GAME =====" << endl;

    cout << "Enter Team 1 Name: ";
    cin >> team1;

    cout << "Enter Team 2 Name: ";
    cin >> team2;

    cout << "Enter Number of Rounds: ";
    cin >> rounds;

    cout << "\nTossing coin...\n";
    int toss = rand() % 2;

    string raidingTeam = (toss == 0) ? team1 : team2;
    cout << raidingTeam << " won the toss and will raid first!\n\n";

    for (int i = 1; i <= rounds; i++) {
        cout << "----- Round " << i << " -----\n";

        int raidPoints = rand() % 3;  // 0,1,2 points

        if (raidingTeam == team1) {
            score1 += raidPoints;
            cout << team1 << " scored " << raidPoints << " points!\n";
            raidingTeam = team2;
        } else {
            score2 += raidPoints;
            cout << team2 << " scored " << raidPoints << " points!\n";
            raidingTeam = team1;
        }

        cout << "Score: " << team1 << " (" << score1 << ") - "
             << team2 << " (" << score2 << ")\n\n";
    }

    cout << "===== FINAL SCORE =====\n";
    cout << team1 << ": " << score1 << endl;
    cout << team2 << ": " << score2 << endl;

    if (score1 > score2)
        cout << team1 << " wins the match!\n";
    else if (score2 > score1)
        cout << team2 << " wins the match!\n";
    else
        cout << "The match is a Draw!\n";

    return 0;
}