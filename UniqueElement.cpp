#include<iostream>
using namespace std;
int main(){
    int i;
    int num=0;
    int arr[5]={2,1,1,3,0};
    for(int i=0;i<5;i++){
         num=num^arr[i];
       

    }
    cout<<num<<endl;
}