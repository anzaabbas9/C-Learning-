#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
using namespace std;

class character {
protected:
    string name;
    int health;
    int defence_power;
    int level;
    int attack_power;

public:
    character(string n, int h, int defp, int lvl, int attp) {
        name = n;
        health = h;
        defence_power = defp;
        level = lvl;
        attack_power = attp;
    }

    virtual int attack() = 0;

    void takeDamage(int damage) {
        int actual = damage - defence_power;
        if (actual < 0) actual = 0;

        health -= actual;
        if (health < 0) health = 0;

        cout << name << " took " << actual << " damage!\n";
    }

    bool isalive() {
        return health > 0;
    }

    void display_stats() {
        cout << "\n--- " << name << " Stats ---\n";
        cout << "Health: " << health << endl;
        cout << "Defence: " << defence_power << endl;
        cout << "Attack: " << attack_power << endl;
        cout << "Level: " << level << endl;
    }
};

// 🔹 Player Class
class player : public character {
public:
    player(string n) : character(n, 100, 5, 1, 15) {}

    int attack() {
        int damage = attack_power + rand() % 6; // random boost
        cout << "Player attacks with " << damage << " power!\n";
        return damage;
    }

    void heal() {
        int heal_amount = 10;
        health += heal_amount;
        cout << name << " healed +" << heal_amount << " HP!\n";
    }
};

// 🔹 Enemy Class
class enemy : public character {
public:
    enemy(string n) : character(n, 80, 3, 1, 10) {}

    int attack() {
        int damage = attack_power + rand() % 5;
        cout << "Enemy attacks with " << damage << " power!\n";
        return damage;
    }
};

int main() {
    srand(time(0));

    string pname;
    cout << "Enter your name: ";
    cin >> pname;

    player p1(pname);
    enemy e1("Goblin");

    cout << "\n⚔️ Battle Start!\n";

    while (p1.isalive() && e1.isalive()) {
        cout << "\n1. Attack\n2. Heal\nChoose: ";
        int choice;
        cin >> choice;

        if (choice == 1) {
            e1.takeDamage(p1.attack());
        } 
        else if (choice == 2) {
            p1.heal();
        } 
        else {
            cout << "Invalid choice!\n";
            continue;
        }

        if (e1.isalive()) {
            p1.takeDamage(e1.attack());
        }

        p1.display_stats();
        e1.display_stats();
    }

    cout << "\n🏁 Battle Over!\n";

    if (p1.isalive())
        cout << "🎉 You Win!\n";
    else
        cout << "💀 You Lose!\n";

    return 0;
}