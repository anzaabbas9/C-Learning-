#include<iostream>
#include<string>
using namespace std;
class Teacher
{
    private:
    double salary;
    public:
    string name;
    string depart;
   // char grade;
    // double salary;
    void changedepart(string newdepart){
    depart=newdepart;}

//setter
void setsalary(double s){
    salary=s;
}
//getter
double getsalary()
{
    return salary;
}
};
int main(){
    Teacher t1;
    t1.name="ayesha";
    t1.depart="computer science";
    t1.setsalary(25000);
   // t1.changedepart("EE");
    cout<<"name="<<t1.name<<endl;
    cout<<"depart="<<t1.depart<<endl;
    cout<<"salary="<<t1.getsalary()<<endl;




}