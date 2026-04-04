#include<iostream>
using namespace std;
class character{
protected:
string name;
float health;
int defence_power;
int level;
int attack_power;
public:
character(string n,float h,int defp,int lvl,int attp){
name=n;
health=h;
defence_power=defp;
level=lvl;
attack_power=attp;
}
 virtual int attack()=0;
void takeDamage(int damage){
    damage -= defence_power;
    if(damage < 0) damage = 0;
    health -= damage;
}

bool isalive(){
    return health>0;}

void display_stats(){
    cout<<"name:"<<name<<endl;
    cout<<"health :"<<health<<endl;
    cout<<"defence power:"<<defence_power<<endl;
    cout<<"attack power:"<<attack_power<<endl;
    cout<<"level:"<<level<<endl;
}
};
class player:public character{
    public:
    player(string n):character(n,6,20,1,15){

    }
    int attack(){
        cout<<"player attack\n";
        return attack_power;
    }
    };
    class enemy:public character{
        public:
        enemy(string n):character(n,5,10,1,4){

        }
    
    int attack(){
        cout<<"enemy attack\n";
        return attack_power;
    }
    };
    int main() {
    player p1("Hero");     // object of player
    enemy e1("Goblin");    // object of enemy

    while(p1.isalive() && e1.isalive()) {
        e1.takeDamage(p1.attack());
        p1.takeDamage(e1.attack());
    }

    cout << "Battle Over!\n";
    p1.display_stats();
e1.display_stats();

    return 0;
}
