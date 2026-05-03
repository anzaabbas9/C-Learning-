#include <iostream>
#include <string>
#include <windows.h> // GRAPHICS: For colors and Sleep
#include <vector>

using namespace std;

// GRAPHICS: Function to change console text colors
void set_color(int c) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, c);
}

// GRAPHICS: A simple effect to make the game look professional
void loading_effect() {
    set_color(8); // Gray color
    cout << "Checking moves";
    for(int i=0; i<3; i++) {
        Sleep(400); // Wait 0.4 seconds
        cout << ".";
    }
    cout << endl;
}

struct Player {
    string name;
    int move;
};

// Logic: Check who wins the round
int get_result(int m1, int m2) {
    if (m1 == m2) return 0; // Tie
    if ((m1 == 1 && m2 == 3) || (m1 == 2 && m2 == 1) || (m1 == 3 && m2 == 2)) return 1; // P1 wins
    return 2; // P2 wins
}

// GRAPHICS: Special box to show the Semi-Final winner
void show_semi_winner(string winner) {
    system("cls"); // Clear screen
    set_color(10); // Green color
    cout << "****************************************" << endl;
    cout << "   WINNER ADVANCING TO FINALS: " << winner << "!" << endl;
    cout << "****************************************" << endl;
    set_color(15); // White color
    cout << "\nPress Enter to continue...";
    cin.ignore(); cin.get();
}

// Battle function: Handles the match between two players
string start_battle(Player &p1, Player &p2) {
    int winner = 0;
    while (winner == 0) {
        set_color(11); // Cyan color
        cout << "\n>>> MATCH: " << p1.name << " vs " << p2.name << " <<<" << endl;
        
        set_color(7); // Normal color
        cout << p1.name << " [1:Rock, 2:Paper, 3:Scissors]: ";
        cin >> p1.move;
        system("cls"); // GRAPHICS: Clear screen

        cout << p2.name << " [1:Rock, 2:Paper, 3:Scissors]: ";
        cin >> p2.move;
        system("cls");

        loading_effect(); // GRAPHICS: Loading dots
        
        winner = get_result(p1.move, p2.move);

        if (winner == 0) {
            set_color(12); // Red color
            cout << ">> IT'S A TIE! PLAY AGAIN! <<" << endl;
        } else {
            set_color(10); // Green color
            string match_winner = (winner == 1) ? p1.name : p2.name;
            cout << ">> " << match_winner << " WINS THIS ROUND! <<" << endl;
            Sleep(1500); 
            return match_winner;
        }
    }
    return "";
}

int main() {
    Player p[4];
    int reg_colors[] = {11, 13, 14, 10}; // GRAPHICS: Colors for registration

    set_color(15);
    cout << "--- TOURNAMENT REGISTRATION ---" << endl;
    for (int i = 0; i < 4; i++) {
        set_color(reg_colors[i]);
        cout << "Enter Player " << i + 1 << " Name: ";
        cin >> p[i].name;
    }
    system("cls");

    // SEMI-FINAL 1
    set_color(14); // Yellow
    cout << "--- SEMI-FINAL 1: " << p[0].name << " vs " << p[1].name << " ---" << endl;
    string winner1 = start_battle(p[0], p[1]);
    show_semi_winner(winner1);
    system("cls");

    // SEMI-FINAL 2
    set_color(14);
    cout << "--- SEMI-FINAL 2: " << p[2].name << " vs " << p[3].name << " ---" << endl;
    string winner2 = start_battle(p[2], p[3]);
    show_semi_winner(winner2);
    system("cls");

    // GRAND FINAL DECORATION
    set_color(13); // Pink/Magenta
    cout << "========================================" << endl;
    cout << "          THE GRAND FINAL MATCH         " << endl;
    cout << "      " << winner1 << "   VS   " << winner2 << endl;
    cout << "========================================" << endl;

    Player f1, f2;
    f1.name = winner1; f2.name = winner2;
    string champion = start_battle(f1, f2);

    // CHAMPION REVEAL
    system("cls");
    set_color(10); // Green
    cout << "====================================================" << endl;
    cout << "         OFFICIAL CHAMPION: " << champion << endl;
    cout << "====================================================" << endl;
    set_color(15);
    cout << "\n Congratulations to our winner! Tournament complete." << endl;
    set_color(7);

    return 0;
}