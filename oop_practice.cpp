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
/*#include<iostream>
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
 }*/
/*#include <iostream>
using namespace std;
class cpu{
    public:
    cpu(){
        cout<<"cpu created"<<endl;
    }
    ~cpu(){
       cout<<" cpu destroyed"<<endl;
    }
};
class ram{
    public:

   ram(){

    cout<<" ram  created"<<endl;
   }
   ~ram(){

    cout<<" ram distroyed"<<endl;
   }
};
class harddrive{
    public:
    harddrive(){
        cout<<"harddrive created"<<endl;
    }
    ~harddrive(){
        cout<<"harddrive destroyed"<<endl;
    }
};
class laptop{
    public:
     cpu c;
    ram r;
    harddrive h;
    laptop(){
        cout<<"laptop created"<<endl;
    }
    ~laptop(){
        cout<<"laptop destroyed"<<endl;
    }
    void start(){
    cout<<"yehhh laptop started!!!";
    }
};
int main(){
    laptop l;
    l.start();

    return 0;
}*/
/*#include <iostream>
using namespace std;
class bank{
    public:
    int static totalaccounts;
    bank(){
        totalaccounts++;
        cout<<" new account created.total "<<totalaccounts<<endl;

    }
    ~bank(){
        totalaccounts--;
        cout<<"account destroyed.total "<<totalaccounts<<endl;

    }
    static void showtotal(){
        cout<<"total accounts are: "<<totalaccounts<<endl;
    }
};
int bank:: totalaccounts=0;
int main(){

    bank b1;
    bank b2;
    bank::showtotal();
    return 0;
}*/
/*#include<iostream>
using namespace std;
class calculator{
    public:
    static void add(int a,int b){
        cout<<"addition is:"<<a+b<<endl;
    }
    static void sub(int a,int b){
        cout<<"subtraction is:"<<a-b<<endl;
    }
    static void mul(float a,float b){
        if(a!=0){
            cout<<"multiplication is:"<<a*b<<endl;
        }
        else
        cout<<"not possible"<<endl;
    }
     static void div(float a,float b){
        if(b!=0){
            cout<<"division  is:"<<a/b<<endl;
        }
        else
        cout<<"not possible"<<endl;
    }
};
int main(){
    calculator::add(2,4);
    calculator::sub(2,4);
    calculator::mul(2,4);
    calculator::div(2,0);
    return 0;
}*/
/*#include<iostream>
using namespace std;
class hospital{
    public:
    int patients;
     int *ptr;
    hospital(int p){
        patients=p;
        ptr=new int[patients];
for(int i=0;i<patients;i++){
    cout<<"enter new patient record "<<i+1<<":";
    cin>>(ptr[i]);
}}
void display(){
for(int i=0;i<patients;i++){
    cout<<" patient record"<<i+1<<":"<<ptr[i]<<"\n";
    }}
    ~hospital(){
        delete[] ptr;
        cout<<"free record!!";
    }
};
int main(){
    int n;
    cout<<"how many patients?";
    cin>>n;
    hospital h1(n);
    h1.display();
    return 0;
}*/
/*#include<iostream>
using namespace std;
class animal{
    public:
   virtual void sound()=0;

};
class dog:public animal{
    public:
    void sound(){
        cout<<"barking!!"<<endl;
    }
};
class cat:public animal{
    public:
    void sound(){
        cout<<"mewing!!"<<endl;
    }
};
class cow:public animal{
    public:
    void sound(){
        cout<<"moooooo!!"<<endl;
    }
};
int main(){
    animal *ptr[3];
    ptr[0]= new dog();
    ptr[1]= new cat();
    ptr[2]= new cow();
    for(int i=0;i<3;i++){
        ptr[i]->sound();
    }
    for(int i=0;i<3;i++){
        delete ptr[i];
    }
    return 0;
}*/
/*#include <iostream>
using namespace std;
class Time
{
public:
    int hours;
    int minutes;
    Time(int h, int m)
    {
        hours = h;
        minutes = m;
    }
    Time operator+(Time &obj)
    {
        int totalmin = minutes + obj.minutes;
        int totalhr = hours + obj.hours;
        if (totalmin >= 60)
        { // overflow check
            totalhr += totalmin / 60;
            totalmin = totalmin % 60;
        }

        return Time(totalhr, totalmin);
    }
    void display()
    {
        cout << "Total Time: " << hours << " hours and "
             << minutes << " minutes" << endl;
    }
};

int main()
{
    Time t1(3, 12);
    Time t2(4, 8);
    Time t3 = t1 + t2;
    t3.display();
    return 0;
}*/
/*#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> v;
    int n;

    cout << "Enter size of vector: ";
    cin >> n;

    cout << "Enter student marks: " << endl;
    for(int i = 0; i < n; i++) {
        int mark;
        cin >> mark;
        v.push_back(mark);    // correct way to add to vector
    }

    cout << "Student marks are: " << endl;
    for(int i = 0; i < n; i++) {
        cout << v.at(i) << endl;
    }

    cout << "Removing last mark..." << endl;
    v.pop_back();             // correct way to remove last element

    cout << "After removing last mark: " << endl;
    for(int i = 0; i < v.size(); i++) {
        cout << v.at(i) << endl;
    }

    return 0;
}*/
/*#include<iostream>
using namespace std;
class divide{
    public:
void result(int a,int b){
    try{
        if(b==0)
        throw b;
        if(b<0)
        throw 'n';
        else
        cout<<"division:"<<a/b<<endl;
    }
    catch(int){
    cout<<"not possible division by 0"<<endl;}
    catch(char){
        cout<<"negative value not possible"<<endl;
    }

}};
int main(){
    divide d1;
     d1.result(4,-6);
     return 0;
}*/ 
    