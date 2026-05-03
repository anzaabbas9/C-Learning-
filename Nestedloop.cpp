#include<iostream>
using namespace std;
int main(){
    int arr[]={10,1,3,-4,7,5};
    float sum=0,prod=0;
    for(int i=0;i<=5;i++){
        for(int j=i+1;j<=5;j++){
            cout<<"("<<arr[i]<<","<<arr[j]<<")"<<"\t";
           
            sum+=arr[i]+arr[j];
            
            cout<<"\n";
            prod+=arr[i]*arr[j];
            
        }
    }cout<<"sum is "<<sum<<endl;
    cout<<"product is "<<prod<<endl;
}