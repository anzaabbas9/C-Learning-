#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
using namespace std;

// ── Base class ──────────────────────────────────────────────
class Reel {
protected:
    string symbols[5] = {"Cherry","Lemon","Bell","Star","Seven"};
    string result;
public:
    void spin() {
        result = symbols[rand() % 5];
    }
    string getResult() { return result; }
};

// ── Derived class ────────────────────────────────────────────
class SlotMachine : public Reel {
private:
    string reel1, reel2, reel3;
public:
    void spinAll() {
        spin(); reel1 = getResult();
        spin(); reel2 = getResult();
        spin(); reel3 = getResult();
    }

    void display() {
        cout << "\n  +--------+--------+--------+\n";
        cout << "  | " << reel1 << "\t | " << reel2 << "\t | " << reel3 << "\t |\n";
        cout << "  +--------+--------+--------+\n";
    }

    int calculateWin(int bet) {
        if (reel1 == "Seven" && reel2 == "Seven" && reel3 == "Seven") {
            cout << "\n  *** JACKPOT! SEVEN SEVEN SEVEN! ***\n";
            return bet * 20;
        }
        else if (reel1 == reel2 && reel2 == reel3) {
            cout << "\n  *** 3 MATCH! BIG WIN! ***\n";
            return bet * 5;
        }
        else if (reel1 == reel2 || reel2 == reel3 || reel1 == reel3) {
            cout << "\n  ** 2 Match - Small Win! **\n";
            return bet * 2;
        }
        else {
            cout << "\n  No match. Try again!\n";
            return 0;
        }
    }
};

// ── Player class ─────────────────────────────────────────────
class Player {
private:
    string name;
    int coins;
public:
    Player(string n, int c) {
        name  = n;
        coins = c;
    }

    string getName()   { return name; }
    int    getCoins()  { return coins; }

    void placeBet(int bet)    { coins -= bet; }
    void addWinnings(int win) { coins += win; }
    bool canPlay(int bet)     { return coins >= bet; }

    void showStatus() {
        cout << "\n------------------------------\n";
        cout << "  Player : " << name  << "\n";
        cout << "  Coins  : " << coins << "\n";
        cout << "------------------------------\n";
    }
};

// ── Game class ───────────────────────────────────────────────
class Game {
private:
    Player*      player;
    SlotMachine* machine;

public:
    Game(Player* p, SlotMachine* m) {
        player  = p;
        machine = m;
    }

    void start() {
        cout << "\n==============================\n";
        cout << "   WELCOME TO SLOT MACHINE!   \n";
        cout << "==============================\n";
        cout << "  Symbols: Cherry Lemon Bell Star Seven\n";
        cout << "  2 Match = 2x  |  3 Match = 5x  |  777 = 20x\n";

        char choice;
        do {
            player->showStatus();

            int bet;
            cout << "\n  Enter your bet: ";
            cin >> bet;

            if (bet <= 0) {
                cout << "  Bet must be greater than 0!\n";
                continue;
            }

            if (!player->canPlay(bet)) {
                cout << "  Not enough coins! You have " << player->getCoins() << " coins.\n";
                break;
            }

            player->placeBet(bet);

            cout << "\n  Spinning";
            for (int i = 0; i < 3; i++) {
                cout << ".";
                cout.flush();
            }

            machine->spinAll();
            machine->display();

            int winnings = machine->calculateWin(bet);

            if (winnings > 0) {
                cout << "  You won " << winnings << " coins!\n";
                player->addWinnings(winnings);
            } else {
                cout << "  You lost " << bet << " coins.\n";
            }

            if (player->getCoins() <= 0) {
                cout << "\n  OUT OF COINS! GAME OVER.\n";
                break;
            }

            cout << "\n  Play again? (y/n): ";
            cin >> choice;

        } while (choice == 'y' || choice == 'Y');

        cout << "\n==============================\n";
        cout << "  FINAL COINS: " << player->getCoins() << "\n";
        cout << "  Thanks for playing, " << player->getName() << "!\n";
        cout << "==============================\n";
    }
};

// ── main ─────────────────────────────────────────────────────
int main() {
    srand(time(0));

    string name;
    cout << "==============================\n";
    cout << "       SLOT MACHINE GAME      \n";
    cout << "==============================\n";
    cout << "Enter your name: ";
    cin >> name;

    Player      player(name, 100);
    SlotMachine machine;
    Game        game(&player, &machine);

    game.start();

    return 0;
}