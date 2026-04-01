#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number between 0 and 5";
    cin>>n;
    do{
        cout<<"plz enter another num ber"<<endl;
        cin>>n;
    }while(n<0||n>5);
    cout<<"thanks";
}