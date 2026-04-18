#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<bool>flag(10);
    vector<bool>v(flag.begin(),flag.end());
    fill(flag.begin(),flag.end(),0);
    for(int i=0;i<flag.size();i++){
        cout<<flag[i]<<"\t";
    }
}