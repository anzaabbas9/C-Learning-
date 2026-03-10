#include<iostream>
using namespace std;
int main(){
    bool a=true;
    void *ptr;
    int x=54;
    ptr=&x;
    //float y=45.56;
   // float z=x+y-true+false;
    cout<<a<<endl;
    cout<<*(int*)ptr<<endl;
    cout<<ptr<<endl;

    //cout<<z<<endl;
    cout<<sizeof(bool);
}