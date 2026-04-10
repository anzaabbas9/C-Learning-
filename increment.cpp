#include<iostream>
using namespace std;
int main(){
    //int x=3,y;
   // y=++x - ++x + ++x;
   int x=10,y=20,z;
   //z=x++ + y++ +x +y + ++x + ++y;
    z=x-- - x + ++x + --y - ++y + --x - y-- + ++x -  y++;
   //y=x++ + ++x +1 + --x + x--;
    cout<<"x= "<<x<<"  y= "<<y<<" "<<"z="<<z<<endl;

}