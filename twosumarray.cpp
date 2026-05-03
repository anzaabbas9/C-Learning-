#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,-2,3,66,100};
    int target=69;
    for(int i=0 ;i<5;i++){
        for(int j=i+1;j<5;j++)
        if(target==arr[i]+arr[j]){
      cout<<i<<","<<j<<endl;}
    }
}