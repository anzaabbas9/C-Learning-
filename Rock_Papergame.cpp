#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
class Player{
    protected:
    string name;
    int choice;
    public:
    Player(){
        
    }
    int  getchoice(){
        return choice;
    }
    string getname(){
        return name;
    }
    virtual void makechoice()= 0;
    string choicetostring()
    {
        if(choice==0)
        return" paper";
        else if (choice==1)
        return "sicssor";
        else
        return "rock";
    }
};
class human:public Player{
    public:
    
    void makechoice(){
        cout<<"enter  human name:";
        cin>>name;
        cout<<"YOU, Enter your choice (0.Paper,1.Scissor,2.Rock):";
        cin>>choice;
        if(choice<0||choice>2){
            cout<<"invalid choice !! default to rock";
            cin>>choice;
        }
    }
};
class computer:public Player{
    public:
    computer():Player(){
        srand(time(0));
    }
    void makechoice(){
        cout<<"enter  computer name:";
        cin>> name;
      choice= rand()%3;
    cout<<getname()<<" chooses "<<choicetostring()<<endl;  
    }
};
class Game{
private:
Player*p1;
Player*p2;
public:
    Game(Player* player1, Player* player2)
{
    p1=player1;
    p2=player2;
}
void playRound(){
p1->makechoice();
p2->makechoice();
cout<<p1->getname()<<" chooses "<<p1->choicetostring()<<endl;
cout<<p2->getname()<<" chooses "<<p2->choicetostring()<<endl;

int c1=p1->getchoice();
int c2=p2->getchoice();
    if(c1==c2){
    cout<<"it's draw---";}
    else if(c1==0&&c2==2||c1==1&&c2==0||c1==2&&c2==1){
    cout<<"you winn!!";}
    else
    cout<<"computer win!!";

}};
int main(){
    srand(time(0));
    human h1;
    h1.makechoice();
    computer c1;
    c1.makechoice();
    Game game (&h1,&c1);
    char playAgain;
    do{
            cout<<"----Rock Paper Sicssor Game----"<<endl;
            game.playRound();
            cout<<"play again!!(y/n)"<<endl;
            cin>>playAgain;
        }
    while(playAgain=='y'||playAgain=='Y');
    cout<<"Thanks for playing !!";
    return 0;
}