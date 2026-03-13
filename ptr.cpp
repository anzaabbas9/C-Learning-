#include<iostream>
using namespace std;
int main(){
    int x=10;
    int *ptr;
    ptr=&x;
    cout<<"x="<<x<<endl;
    cout<<"*ptr="<<*ptr<<endl;
    cout<<"&x="<<&x<<endl;
    cout<<"ptr="<<ptr<<endl;
    cout<<*(*ptr)<<endl;
}