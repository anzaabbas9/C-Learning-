//#include<iostream>
//using namespace std;

    /*int a=15;
    if(a%2==0)
    cout<<"even num";
    else
    cout<<"odd num";
    
*/
/*int a,b,num;
a=2;
b=3;
cout<<a<<" "<<b<<endl;
num=a;
a=b;
b=num;S
cout<<a<<" "<<b;*/
#include<iostream>
using namespace std;
int main(){
int a,b;
char op;
a=4;
b=5;
cout<<"enter an op(+,-,*,/,%): ";
cin>>op;
switch(op)
{
    case'+':
    cout<<a+b<<endl;
    break;
   case'-':
    cout<<a-b<<endl;
    break;
    case'*':
    cout<<a*b<<endl;
    break;
    case'/':
    cout<<a/b<<endl;
    break;
    case'%':
    cout<<a%b<<endl;
    default:
    cout<<"invalid operater ";
}
    return 0;
    }
