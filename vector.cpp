#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    int num;
    v.push_back(1);
    v.push_back(10);
    v.push_back(100);
    v.push_back(1000);
    v.push_back(10000);
    v.push_back(100000);
   /* for(int i=0;i<5;i++){
        cout<<"enter values:";
        cin>>num;
        v.push_back(num);
        //cout<<v[i]<<endl;
    }*/
    //v.push_back(1);
   // cout<<v[4];
   cout<<"before reserve***"<<endl;
    cout<<"size of v:"<<v.size()<<endl;
    cout<<"capacity of v:"<<v.capacity()<<endl;
    cout<<"after reserve***"<<endl;
    v.reserve(10);
      cout<<"capacity of v:"<<v.capacity()<<endl;
     cout<<"size of v:"<<v.size()<<endl;
     cout<<"after resize***"<<endl;
    v.resize(7);
     cout<<"size of v:"<<v.size()<<endl;
    cout<<"capacity of v:"<<v.capacity()<<endl;}