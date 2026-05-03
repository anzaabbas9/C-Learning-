#include<iostream>
using namespace std;
int main(){
    int  n=0,sum=0;
    do{
        sum+=n;
        cout<<"enter a number:"<<endl;
        cin>>n;
       
    }while(n>=0);
    cout<<"the sum is:"<<sum;
}