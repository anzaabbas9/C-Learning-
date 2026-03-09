#include<iostream>
//#include<string>
using namespace std;
class Teacher
{
    private:
    double salary;
    public:
    string name;
    string depart;
     void changedepart(string newdepart){
    depart=newdepart;}
   /* //non parametric constructor
    Teacher(){
        depart="ss";
    }*/
//parametric cons
 Teacher(string name,string depart,double salary ){
       this-> name=name;
        this->depart=depart;
       this-> salary=salary;

    }
    /* //copy cons
    Teacher(Teacher &origobj){
        cout<<"hey I'm copy constructer"<<endl;
        this->name = origobj .name;
        this->depart = origobj. depart;
        this->salary = origobj. salary;
    }*/
//setter
void setsalary(double s){
    salary=s;
}
//getter
double getsalary()
{
    return salary;
}
void getinfo(){
    cout<<"name: "<<name<<endl;
    cout<<"depart:"<<depart<<endl;
    cout<<"salary:"<<salary<<endl;
}
};
int main(){
    Teacher t1("Maryam","computer science",52000);
    Teacher t2(t1);
   
    
  t2. getinfo();





}