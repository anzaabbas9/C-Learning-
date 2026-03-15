#include<iostream>
using namespace std;
int main(){
    int ch;
    cout<<"enter the choice";
    cin>>ch;
    switch(ch){
        case 1:
        cout<<"hey! i'm case 1"<<endl;
        break;
         case 2:
        cout<<"hey! i'm case 2"<<endl;
        break;
         case 3:
        cout<<"hey! i'm case 3"<<endl;
        break;
         case 4:
        cout<<"hey! i'm case 4"<<endl;
        break;
         case 5:
        cout<<"hey! i'm case 5"<<endl;
        break;
        default:
        cout<<"i'm default block"<<endl;
        break;

    }
  return 0;  
}