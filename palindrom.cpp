#include<iostream>
using namespace std;
int main(){
    int n,orig,rev=0;
   
    cout<<"enter a number:";
    cin>>n;
    orig=n;
    while(n>0)
    {
        rev=(rev*10)+n%10;
        n=n/10;

    }
    if(rev==orig)
    cout<<"palindrom";
    else
    cout<<"not palindrom";
}