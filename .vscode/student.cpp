#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"enter marks:";
    cin>>marks;
    if(marks>80)
    cout<<"your grade is A";
    else if(marks<80&&marks>>70)
    cout<<"your grade is B";
    else if(marks<70&&marks>60)
    cout<<"your grade is c";
    else if (marks<60&&marks>50)
    cout<<"you are fail";
}