#include<iostream>
using namespace std;
class Teacher
{
    
    //double salary;
    public:
    string name;
    string depart;
   // char grade;
     double salary;
    void changedepart(string newdepart){
    depart=newdepart;}
};
int main(){
    Teacher t1;
    t1.name="ayesha";
    t1.depart="computer science";
   // t1.changedepart("EE");
    cout<<"name="<<t1.name<<endl;
    cout<<"depart="<<t1.depart<<endl;



}