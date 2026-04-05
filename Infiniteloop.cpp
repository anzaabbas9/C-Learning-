#include<iostream>
using namespace std;
int main(){
    int i=1;
    while(i<=4){

        if(i==2){
            continue;
        }
        cout<<i<<"   ";
        i++;
        cout<<"hey!!!";
    }cout<<"hi    ";
}