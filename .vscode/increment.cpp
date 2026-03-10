#include<iostream>
using namespace std;
int main(){
    //int x=3,y;
   // y=++x - ++x + ++x;
   int x=5,y;
   y=x++ + ++x +1 + --x + x--;
    cout<<"x= "<<x<<"  y= "<<y<<endl;

}