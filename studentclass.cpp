#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int rollno;
    int cgpa;
    student(string name,int rollno,int cgpa){
        this->name=name;
        this->rollno=rollno;
        this->cgpa=cgpa;

    }
    student(student &obj){
         this->name=obj.name;
        this->rollno=obj.rollno;
        this->cgpa=obj.cgpa;
    }
    void getinfo(){
        cout<<"name:"<<name<<endl;
         cout<<"rollno:"<<rollno<<endl;
         cout<<"cgpa:"<<cgpa<<endl;
        
    }
};
int main(){
    student s1("anza",1007,8.9);
    s1.getinfo();
    student s2("zainab",1046,9.2);
    s2.getinfo();
    return 0;
}