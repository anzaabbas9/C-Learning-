#include<iostream>
using namespace std;
int main(){
    /*int x=10;
    int *ptr;
    ptr=&x;
    cout<<"x="<<x<<endl;
    cout<<"*ptr="<<*ptr<<endl;
    cout<<"&x="<<&x<<endl;
    cout<<"ptr="<<ptr<<endl;
    cout<<"&ptr="<<&ptr<<endl;
}*/
//complex ptr code
int i=1024;
int *ip=&i;
int *ip2=ip;
//int *ip3=ip;
int **ip3=&ip;
//unsigned int * uip3=*ip;;
//unsigned int *uip3=ip;
cout<<"*ip:"<<*ip<<endl;
cout<<"ip:"<<ip<<endl;
cout<<"&i:"<<&i<<endl;
cout<<"ip2:"<<ip2<<endl;
cout<<"*ip3:"<<*ip3<<endl;
cout<<"ip3:"<<ip3<<endl;
//cout<<"**ip3:"<<**ip3<<endl;
//cout<<"uip3:"<<uip3<<endl;
}
