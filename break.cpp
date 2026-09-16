#include<iostream>
using namespace std;
int main(){
    int arr[]={1,10,-1,5,6,-1,7,-99,8,10};
    for(auto b:arr){
        if(b==-1){
            continue;
        }
         
        else if(b==-99){
            break;
        }
        cout<<"b="<<b<<endl; 
    }
}