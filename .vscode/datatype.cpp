#include<iostream>
using namespace std;
int main()
{
    unsigned short x=67;
    signed short y=-4576;
    int c=45;
    long d=65535;
    long long e=03036277335;
    //size of variables
    cout<<"size of u_short="<<sizeof(x)<<endl;
    cout<<"size of s_short"<<sizeof(y)<<endl;
    cout<<"size of c"<<sizeof(c)<<endl;
    cout<<"size of long d="<<sizeof(d)<<endl;
    cout<<"size of long long e="<<sizeof(e)<<endl;
    //values of variables
    cout<<"a="<<x<<endl;
   // cout<<"a="<<a<<endl;
    cout<<"b="<<y<<endl;
    cout<<"c="<<c<<endl;
    cout<<"d="<<d<<endl;
    cout<<"e="<<e<<endl;
}



