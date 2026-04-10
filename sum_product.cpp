#include<iostream>
using namespace std;
int main(){
    int sum=0;
    int prod=0;
    int arr[5]={1,3,5,6,7};
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            cout<<arr[i]<<","<<arr[j]<<endl;
sum+=arr[i]*arr[j];
            cout<<"sum is:"<<sum<<"\t";

        }
    }cout<<endl;
    cout<<"product is: ";
     for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
        prod+=arr[i]+arr[j];
            cout<<prod<<"\t";}}}