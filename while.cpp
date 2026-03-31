#include<iostream>
using namespace std;
int main(){
    int n;
    while(n>2||n<7)
    {
        cout<<"enter number";
        cin>>n;
        cout<<"valid number!!!!"<<"\n";
    }
    cout<<"out of loop";
    return 0;
}