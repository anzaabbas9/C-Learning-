#include<iostream>
using namespace std;
     //base class
class student{
public:
string name;
int rollno;
student(){
    cout<<"hey!i'm base class constructor"<<endl;
}
~student(){
    cout<<"hey!i'm base class distructor"<<endl;
}
void display(string n,int r);
   
};
class teacher:public student{
    public:
    float cgpa;
    teacher(){
        cout<<"hey!i'm derived class cons"<<endl;
    }
     ~teacher(){
        cout<<"hey!i'm derived class distructor"<<endl;
    }
    void display(string n,int r,float gpa){
        cout<<"name:"<<n<<endl;
        cout<<"roll no:"<<r<<endl;
        cout<<"cgpa:"<<gpa<<endl;
    }
};
int main(){
    teacher t1;
    t1.display("anza",1007,3.9);
}