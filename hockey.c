#include <iostream>
using namespace std;

int main() {
    string team1, team2;
    int score1, score2;

    cout << "=== Hockey Match Simulator ===" << endl;

    cout << "Enter Team 1 Name: ";
    cin >> team1;

    cout << "Enter Team 2 Name: ";
    cin >> team2;

    cout << "Enter goals scored by " << team1 << ": ";
    cin >> score1;

    cout << "Enter goals scored by " << team2 << ": ";
    cin >> score2;

    cout << "\n=== Match Result ===" << endl;
    cout << team1 << " " << score1 << " - " 
         << score2 << " " << team2 << endl;

    if (score1 > score2) {
        cout << team1 << " wins the match! 🏆" << endl;
    } 
    else if (score2 > score1) {
        cout << team2 << " wins the match! 🏆" << endl;
    } 
    else {
        cout << "The match is a draw!" << endl;
    }

    return 0;
}