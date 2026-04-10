#include<iostream>
using namespace std;
int main(){
    /*for(int i=1;i<=4;i++){
    for(int j=1;j<=i;j++){
    cout<<"*";}
    cout<<endl;}*/
    int n,m;
    cout<<"enter two num:";
    cin>>n>>m;
    for(int i=1;i<=n;i++){
    for(int j=i;j<=m;j++){
    cout<<"*";}
    cout<<endl;}
}