#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int >num(5);
    //num.push_back (2,5);
    cout<<"enter values:";
    for(int i=0;i<5;i++){
        cin>>num[i];
    }
    cout<<"values are:"<<endl;
    num.at(1)=50;
    for(int i=0;i<5;i++){
        cout<<num[i]<<endl;
    }
    cout<<"size of vector is:"<<num.size()<<endl;
    cout<<"capacity of vector is:"<<num.capacity()<<endl;
    num.at(2)=50;
    for(int i=0;i<5;i++){
        cout<<num[i]<<endl;
    } 
}