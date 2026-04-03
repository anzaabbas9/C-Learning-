#include<iostream>
using namespace std;
int main(){
    int  n,sum=0;
    do{
        cout<<"enter a number:"<<endl;
        cin>>n;
        sum+=n;
    }while(n>=0);
    cout<<"the sum is:"<<sum;
}