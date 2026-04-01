#include<iostream>
using namespace std;
int main(){
    char choice;
    int l,b,area=0;
    do{
        cout<<"enter length and breadth:";
        cin>>l>>b;
        area=l*b;
        cout<<"area:"<<area<<endl;
        cout<<"want to calculate another!!";
        cin>>choice;
    }while(choice=='y'||choice=='Y');
    cout<<"out of loop";
    return 0;
}