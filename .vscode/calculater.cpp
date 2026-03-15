#include<iostream>
#include<cmath>
using namespace std;
class Calculater
{
private:
double a,b;
double result;
public:
void input(){
   cout<<"enter a:";
   cin>>a;
   cout<<"enter b:";
   cin>>b;
}
double add(){
result=a+b;
return result;
 }
 double sub(){
    result =a-b;
    return result;
 }
 double mul(){
    result=a*b;
   return result;

 }
double  div(){
if (b!=0){
result=a/b;}
else {
cout<<"division not possible";
return 0;}
return result;
}
double mod(){
  
result=(int)a%(int)b;
return result;
}
double square(){
   result=a*a;
   return result;
}

};
int main()
{
    Calculater c1;
    int choice;
   //print menu only once
    cout<<"****menu****"<<endl;
    cout<<" 1.add"<<endl;
    cout<<"2.subtract"<<endl;
    cout<<"3. multiplication"<<endl;
    cout<<"4.divide"<<endl;
    cout<<"5.modulus"<<endl;
    cout<<"6.square"<<endl;
    cout<<"7. exit"<<endl;
     //run each case
     while(true){ 
    cout<<"enter choice:"<<endl;
    cin>>choice;
   if(choice==7){
      cout<<"program ends";
      break;
   }
    c1.input();
    switch(choice){
        case 1:
        cout<<"sum is :"<<c1.add()<<endl;
        break;

        case 2:
        cout<<"sub is :"<<c1.sub()<<endl;
        break;

        case 3:
        cout<<"mul is :"<<c1.mul()<<endl;
        break;

        case 4:
        cout<<"div is :"<<c1.div()<<endl;
        break;

        case 5:
        cout<<"mod is:"<<c1.mod()<<endl;
        break;

        case 6:
        cout<<"square is :"<<c1.square()<<endl;
        break;

        default:
        cout<<"exit";


    }}
return 0;
}

