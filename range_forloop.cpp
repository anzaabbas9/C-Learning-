#include<iostream>
#include<vector>
using namespace std;
int main(){
    int sum =0;
    vector<int> a={4,6,5};
    for(auto a:a){ 
        cout<<a<<" "<<endl;
         sum+=a;
        
    }
    cout<<sum;
}