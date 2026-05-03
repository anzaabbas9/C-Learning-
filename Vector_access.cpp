#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v={2,4,8,-10,14,-15};
    cout<<"number at index 1 is:"<<v[1]<<endl;
    cout<<"value at index 4 is:"<<v.at(4)<<endl;
    cout<<"value at last index is:"<<v.back()<<endl;
    cout<<"value at 1st index is:"<<v.front()<<endl;
    v.at(6)=-4;
    cout<<"new value is:"<<v.at(6);

}