#include<iostream>
using namespace std;

class atm{
private:
    double balance;
    int pin;
    int correctPin = 1234;

public:
    //non-paramitrized constructer
    atm(){
        balance = 50000;
        cout<<"Enter your PIN: ";
        cin>>pin;
        if(pin != correctPin){
            cout<<"Wrong PIN. Access Denied."<<endl;
        }
    }
    //changepin
    void changepin(){
            cout<<"enter new pin"<<endl;
            cin>>pin;
       
    }
    //check balance
    void checkbalance(){
        cout<<"Your current balance is: "<<balance<<endl;
    }
    //deposit money
    void deposit(){
        double amount;
        cout<<"Enter amount to deposit: ";
        cin>>amount;
        balance = balance + amount;
        cout<<"Amount deposited successfully"<<endl;
    }

    //withdraw cash
    void withdraw(){
        double amount;
        cout<<"Enter amount to withdraw: ";
        cin>>amount;
        if(amount <= balance){
            balance = balance - amount;
            cout<<"Transaction successful"<<endl;
        }
        else{
            cout<<"Insufficient balance"<<endl;
        }
    }
};

int main(){
    atm a1;
    int choice;

    cout<<"****MENU****"<<endl;
    cout<<"1.change pin"<<endl;
    cout<<"2. Check Balance"<<endl;
    cout<<"3. Deposit Cash"<<endl;
    cout<<"4. Withdraw Money"<<endl;
    cout<<"5. Exit"<<endl;

    while(true){
        cout<<"Enter choice: ";
        cin>>choice;

        if(choice==5){
            cout<<"Thank you for using ATM"<<endl;
            break;
        }

        switch(choice){
            case 1:
            a1.changepin();
            break;
            case 2:
                a1.checkbalance();
                break;

            case 3:
                a1.deposit();
                break;

            case 4:
                a1.withdraw();
                break;

            default:
                cout<<"Invalid choice"<<endl;
        }
    }

    return 0;
}