#include<iostream>
using namespace std;
int main(){
    int n;
    
    do{
        cout<<"enter number between 0 and 5: ";
        cin>>n;
       
    }while(n<0||n>5);
    cout<<"thanks";
}