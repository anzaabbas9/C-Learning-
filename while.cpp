#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number";
    cin>>n;
    bool flag=false;
    while(!flag)
    {
       if(n<=2||n>=7){
        cout<<"plz enter valid number"<<"\n";
        cin>>n;}
        else{
            cout<<"valid number"<<"\n";
            flag=true;
        }
    }
    cout<<"thank u";
    return 0;
}