#include<iostream>
using namespace std;
int main(){
    /*int a[15]={0};
    a[0]={10};
    a[14]={150};
    for(int i=0;i<15;i++)
    cout<<a[i]<<endl;
}*/
int  arr[5]={2,3,4,5,5};
int max=INT_MAX;
for(int i=0;i<5;i++){
    if(arr[i]>arr[0]){
        max=arr[i];
cout<<max<<"\t";}
else
cout<<arr[i];}
}