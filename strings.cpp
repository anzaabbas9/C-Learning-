#include<iostream>
#include<string>
using namespace std;
int main(){
    string str="anza";
    cout<<str.size()<<endl;
    cout<<str.max_size()<<endl;
    cout<<str.capacity()<<endl;
   str.reserve(50);
   str.resize(10);
    cout<<str.size()<<endl;
   cout<<str.capacity()<<endl;
    str.clear();
   cout<<str<<endl;
}