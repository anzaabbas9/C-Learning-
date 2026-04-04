#include <iostream>
#include <cstdlib>  // For rand()
#include <ctime>    // For time()
using namespace std;

// 🔹 Abstract base class for any player
class Player {
protected:
    string name;   // Name of the player
    int choice;    // 0 = Rock, 1 = Paper, 2 = Scissors

public:
    // Constructor
    Player(string n) {
        name = n;
    }

    // Pure virtual function: every derived class must implement how to choose
    virtual void makeChoice() = 0;

    // Getter for choice
    int getChoice() {
        return choice;
    }

    // Getter for name
    string getName() {
        return name;
    }

    // Convert numeric choice to string for printing
    string choiceToString() {
        if(choice == 0) return "Rock";
        if(choice == 1) return "Paper";
        return "Scissors";
    }
};

// 🔹 Human player class
class Human : public Player {
public:
    Human(string n) : Player(n) {}

    void makeChoice() override {
        cout << name << ", enter your choice (0 = Rock, 1 = Paper, 2 = Scissors): ";
        cin >> choice;
        if(choice < 0 || choice > 2) {
            cout << "Invalid choice! Defaulting to Rock.\n";
            choice = 0;  // default if invalid
        }
    }
};

// 🔹 Computer player class
class Computer : public Player {
public:
    Computer(string n) : Player(n) {
        srand(time(0)); // Seed for random number
    }

    void makeChoice() override {
        choice = rand() % 3;  // Random number 0,1,2
        cout << name << " chooses " << choiceToString() << endl;
    }
};

// 🔹 Game class to handle logic
class Game {
private:
    Player* p1;
    Player* p2;

public:
    Game(Player* player1, Player* player2) {
        p1 = player1;
        p2 = player2;
    }

    void playRound() {
        // Each player makes their choice
        p1->makeChoice();
        p2->makeChoice();

        // Print choices
        cout << p1->getName() << " chose: " << p1->choiceToString() << endl;
        cout << p2->getName() << " chose: " << p2->choiceToString() << endl;

        int c1 = p1->getChoice();
        int c2 = p2->getChoice();

        // Determine winner
        if(c1 == c2) {
            cout << "It's a Draw!\n";
        } 
        else if ((c1 == 0 && c2 == 2) || // Rock beats Scissors
                 (c1 == 1 && c2 == 0) || // Paper beats Rock
                 (c1 == 2 && c2 == 1)) { // Scissors beats Paper
            cout << p1->getName() << " Wins!\n";
        } 
        else {
            cout << p2->getName() << " Wins!\n";
        }
    }
};

// 🔹 Main function
int main() {
    cout << "=== Rock-Paper-Scissors Game ===\n";

    Human human("You");
    Computer computer("Computer");

    Game game(&human, &computer);

    char playAgain;
    do {
        game.playRound();  // Play one round
        cout << "\nPlay again? (y/n): ";
        cin >> playAgain;
    } while(playAgain == 'y' || playAgain == 'Y');

    cout << "Thanks for playing!\n";
    return 0;
}