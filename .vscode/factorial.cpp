#include<iostream>
using namespace std;
int main(){
    int n,c,f;
    c=1;
    f=1;
    cout<<"enter a number:";
    cin>>n;
    for(c=n;c>=1;c--)
    {
        f=f*c;
    }
    cout<<"factorial of "<<n<<"is :"<<f;
}