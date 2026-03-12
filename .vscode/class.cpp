#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int age;
    int roll_no;
    Student(string name,int age,int roll_no){
        this->name=name;
        this->age=age;
        this->roll_no=roll_no;

    }
    void getinfo(){
        cout<<"name:"<<name<<endl;
        cout<<"age:"<<age<<endl;
        cout<<"roll_no:"<<roll_no<<endl;
    }
};
int main(){
Student s1("ali",21,101);
    s1.getinfo();
}