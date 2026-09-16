#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int rollno;
    double *cgpaptr;
    student(string name,int rollno,double cgpa){
        this->name=name;
        this->rollno=rollno;
        cgpaptr=new double;
        *cgpaptr=cgpa;
    }
    student (const student &obj){
         this->name=obj.name;
        this->rollno=obj.rollno;
        cgpaptr = new double;
       *cgpaptr=*obj.cgpaptr;
    }
    void getinfo(){
        cout<<"name:"<<name<<endl;
         cout<<"rollno:"<<rollno<<endl;
         cout<<"cgpa:"<<*cgpaptr<<endl;
        
    }
};
int main(){
    student s1("anza",1007,8.9);
    s1.getinfo();
    //student s2("zainab",1046,7);
    student s2(s1);
    *(s2.cgpaptr)= 9.2;
    s2.getinfo();
    s1.getinfo();
    return 0;
}