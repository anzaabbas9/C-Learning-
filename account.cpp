#include<iostream>
using namespace std;
class account{
    private:
    int account_no;
    float balance;
    public:
    account()
    {
        cout<<"hey! I'm constructor"<<endl;

    }
  float deposit(float amount){
    balance=balance+amount;
    return balance;
   } 
   void update_balance(){
    cout<<"your updated balance is:"<<balance;
   }
   void setinfo(){
    account_no=1234455;
    balance=500000;
   }
   void getinfo(){
    cout<<"your account no. is:"<<account_no<<endl;
    cout<<"your current balance is:"<<balance<<endl;
   }

};
int main(){
    account c1;
    c1.setinfo();
    c1.getinfo();
    c1.deposit(20000);
    c1.update_balance();
}