#include<iostream>
using namespace std;
class atm{
    private:
    double balance;
   //int pin;
    public:
    atm(){
 balance=50000;//initial balance
 //cout<<"enter your pin"<<endl;
 //cin>>pin;
}
  //check balance  
void checkbalance(){
cout<<"your current balance is :"<<balance<<endl;
}
//deposit cash
void deposit(){
double amount;
cout <<"enter amount to deposit "<<endl;;
cin>>amount;
balance=balance + amount;
cout<<"amount deposit successfully"<<endl;
}
//withdraw
void withdraw(){
double amount ;
cout<<"enter amount to withdraw";
cin>>amount;
if(amount>=balance){
balance =balance-amount;
cout<<"transaction successfull"<<endl;}
else
cout<<"insufficient balance"<<endl;

}

};
//main func

int main(){
    atm a1;
    int choice;
    cout<<"****menu****"<<endl;
    cout<<"1.check balance"<<endl;
    cout<<"2.deposit cash"<<endl;
    cout<<"3.withdraw money"<<endl;
    cout<<"4.exit"<<endl;
    while(true){
        cout<<"enter choice:"<<endl;
        cin>>choice;
       if(choice==4){
            cout<<"thank you for using ATM";
            break;
        }
        switch(choice){
            case 1:
            a1.checkbalance();
            break;
            case 2:
            a1.deposit();
            break;
            case 3:
            a1.withdraw();
            break;
            default:
                   
            cout<<"invalid choice";
        }
    }
    return 0;
}