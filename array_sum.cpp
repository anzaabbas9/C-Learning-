#include<iostream>
using namespace std;
int main(){
    int i;
    int a1[5];
    int a2[5];
    int a3[5];
    cout<<"enter elements of array 1:";
    for(int i=0;i<5;i++){
        cin>>a1[i];
    }
    cout<<"enter elements of array 2:";
    for(int i=0;i<5;i++){
        cin>>a2[i];
    }
    cout<<"enter elements of array 3:";
    for(int i=0;i<5;i++){
        a3[i]=a1[i]+a2[i];
        cout<<a3[i]<<"\t";
    }
    
}