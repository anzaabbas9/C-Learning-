#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter the choice: ";
    cin>>ch;
    switch(ch-2){
        case 'a':
        cout<<"hey! i'm case 1"<<endl;
        break;
         case 'b':
        cout<<"hey! i'm case 2"<<endl;
        break;
         case 'c':
        cout<<"hey! i'm case 3"<<endl;
        break;
         case 'd':
        cout<<"hey! i'm case 4"<<endl;
        break;
         case 'e':
        cout<<"hey! i'm case 5"<<endl;
        break;
        default:
        cout<<"i'm default block"<<endl;
        break;

    }
  return 0;  
}