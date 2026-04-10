
#include<iostream>
using namespace std;
int main(){
    int a,b,c,max=0;
    cout<<"enter all values:";
    cin>>a>>b>>c;
   
        if(a>b&&a>c)
    {
        max=a;
    }

    if(b>c)
    {  
        max=b;
    }
    else{
        max=c;
    }
    cout<<"max value is:"<<max;
}