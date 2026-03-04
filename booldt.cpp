#include<iostream>
using namespace std;
int main(){
    bool a=true;
    int x=54;
    float y=45.56;
    float z=x+y-true+false;
    cout<<a<<endl;
    cout<<z<<endl;
    cout<<sizeof(bool);
}