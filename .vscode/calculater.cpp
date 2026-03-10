#include<iostream>
using namespace std;
class Calculater
{
private:
double a,b;
double result;
public:
 double add(){
    a=10;
    b=20;
    result=a+b;
    return result; 
 }
 double sub(){
    a=10;
    b=20;
    result =a+b;
    return result;
 }
 double mul(){
    a=12;
    b=6;
    result=a*b;
   return result;

 }
double  div(){
a=10;
b=20;
result=a/b;
return result;
}
};
int main()
{
    Calculater c1;
    int choice;
    cout<<"****menu****"<<endl;
    cout<<"enter 1 for add"<<endl;
    cout<<"enter 2 for subtract"<<endl;
    cout<<"enter 3 for multiplication"<<endl;
    cout<<"enter 4 for divide"<<endl;
    cout<<"enter 5 for exit";
    cout<<"enter choice:"<<endl;
    cin>>choice;
    switch(choice){
        case'1':
        c1.add();
        cout<<"sum is :"<<c1.add();
        break;
        case'2':
        c1.sub();
        cout<<"sub is :"<<c1.sub();
        break;
        case'3':
        c1.mul();
        cout<<"mul is :"<<c1.mul();
        break;
        case '4':
        c1.div();
        cout<<"div is :"<<c1.div();
        break;
        default:
        cout<<"exit";


    }
return 0;
}

