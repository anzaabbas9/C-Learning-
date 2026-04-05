#include<iostream>
using namespace std;
int main(){
    int i=1;
    for(i=1;i<=10;i++){
        for(int j=i;j<=5;j++){
            cout<<"*";
            if(j>3)
            break;
        }cout<<endl;
    
    }}