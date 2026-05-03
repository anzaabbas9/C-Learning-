#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    int result[5];
    int index=0;
    for(int i=0;i<5;i++){
     if(arr[i]%2!=0){
     result[index]=arr[i];
     index++;}}
        for(int i=0;i<5;i++){
            if(arr[i]%2==0){
            result[index]=arr[i];
            index++;}}
    for(int i=0;i<5;i++){
        cout<<result[i]<<"  ";}
    }
