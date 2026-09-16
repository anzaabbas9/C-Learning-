#include<iostream>
using namespace std;
int main(){
    int n,i;
    int count =0;
    cout<<"enter a number:";
    cin>>n;
    for (i=2;i<=n;i++)
    {
        if(n%i==0){
        count+=1;}}
        if(count==1)
        cout<<"prime";
        else
        cout<<"not prime";
    
    
    
}