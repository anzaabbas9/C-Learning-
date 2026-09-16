#include<iostream>
using namespace std;
int main(){
    int arr[10];
    cout<<"enter numbers:";
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }
    cout<<"numbers are:"<<endl;
    for(int j=0;j<10;j++){
        cout<<arr[j]<<"\t";
    }
    cout<<endl;
     cout<<"addreses are:"<<endl;
    for(int k=0;k<10;k++){
        cout<<&arr[k]<<"\t";

    }
    cout<<endl;
    cout<<arr;
    cout<<arr[0];
}