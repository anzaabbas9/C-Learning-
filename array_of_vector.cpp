//---------------------------------------------------------------------------------------------------------
//                          Array of Vector
//---------------------------------------------------------------------------------------------------------
// Create an array of 5 vectors where index i holds multiples of i+1 up to 5 terms. Print all.
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v[5];
    for(int i=0;i<5;i++){
        int size;
        cout<<"enter size of vector"<<i+1<<":";
        cin>>size;
        for(int j=0;j<size;j++){
            int value;
            cin>>value;
            v[i].push_back(value);
        }
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<v[i].size();j++){
            cout<<v[i][j]<<"  ";
        }cout<<endl;
    }
}