#include<iostream>
using namespace std;
class character{
protected:
string name;
float health;
int defence_power;
int level;
int attack_power;
character(string n,float h,int defp,int lvl,int attp){
name=n;
health=h;
defence_power=defp;
level=lvl;
attack_power=attp;
}
virtual int attack()=0;
void takeDamage(int damage){
    health-=damage;
};
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
