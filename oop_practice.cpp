/*#include<iostream>
using namespace std;
class vehicle{
    public:
 int speed;
 string brand;
 vehicle(string b,int s){
    brand=b;
    speed =s;
    cout<<"vehicle class!!"<<endl;
 }
};
class car:public vehicle{
    public:
    int doors;
car(string b,int s,int d):vehicle(b,s){
   doors=d;
}
void printinfo(){
    cout<<"brand:"<<brand<<endl;
    cout<<"speed:"<<speed<<endl;
    cout<<"doors:"<<doors<<endl;;
}
};
int main(){
    car c1("Toyota",5000,4);
    c1.printinfo();
    return 0;
}*/
/*#include<iostream>
using namespace std;
class person{
    public:
    int age;
    string name;
    person(int a,string n){
        age=a;
        name=n;
    }
};
class employee:public person{
    public:
    int height;
    employee(int a,string n,int h):person(a,n){
        height=h;
    }
};
class manager:public employee{
    public:
    int weight;
    manager(int a,string n,int h,int w):employee(a,n,h){
        weight=w;
    }
    void display(){
cout<<"name:"<<name<<endl;
cout<<"age:"<<age<<endl;
cout<<"height:"<<height<<endl;
cout<<"weight:"<<weight<<endl;
    }
};
int main(){
    manager m(21,"ali",4,40);
    m.display();
    return 0;
}*/
/*#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int rollno;
    student(string n,int r){
        name=n;
        rollno=r;
    }
};
class athlete{
    public:
    int score;
    string game;
    athlete(string g,int s){
        score=s;
        game=g;
    }
};
class scholar:public student,athlete{
    public:
    int age;
    scholar(string n,int r,string g,int s,int a):student(n,r),athlete(g,s){
        age=a;
    }
    void display(){
        cout<<"name:"<<name<<endl;
        cout<<"roll no:"<<rollno<<endl;
        cout<<"game:"<<game<<endl;
        cout<<"score:"<<score<<endl;
        cout<<"age:"<<age<<endl;
    }
};
int main(){
    scholar s("ali",2,"football",202,21);
    s.display();
    return 0;
}*/
/*#include<iostream>
using namespace std;
class student{
    private:
    int rollno;
    string name;
    int marks;
    public:
    student(int r,int m,string n){
        cout<<"hy!!! I'm base class constructor."<<endl;
        rollno=r;
        name=n;
        marks=m;
    }
    friend void teacher(student s);
};
 void teacher (student s){
    cout<<"marks:"<<s.marks<<endl;
    s.marks=50;
    cout<<"name:"<<s.name<<endl;
    cout<<"roll number:"<<s.rollno<<endl;
    cout<<"marks:"<<s.marks<<endl;
 }
 int main(){
   student s1(2,121,"ali");
    teacher(s1);
    return 0;
 }*/
#include<iostream>
using namespace std;
class Distance{
    private:
    int meter;
    public:
    Distance(int m){
        meter=m;
    }
 friend Distance operator+ (Distance d1,Distance d2);
 void display(){
    cout<<"distance:"<<meter;
 }   
};
 Distance operator+(Distance d1,Distance d2){
 int total=d1.meter+d2.meter;
 return Distance(total);
 }
 int main(){
    Distance d1(200),d2(100);
    Distance d3=d1+d2;
    d3.display();
    return 0;
 }