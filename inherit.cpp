#include<iostream>
using namespace std;
     //base class
class st_addr
{
    private:
    string name;
    int phone;
    public:
    void setinfo();
    void getinfo();
    
};
   //derived class
class st_result{
public:
int sub1;
int sub2;
float sum;
float avg;
void aver();
};
class teacher:public st_addr,public st_result{
public:
string name="ayesha";
int grade=17;
void display();
};
  //main function
int main(){
    st_result s1;
    teacher t1;
    st_addr st1;
   
    
    t1.setinfo();
    t1.getinfo();
    t1.display();
    t1.aver();
    
   

    
   
   
}   
    //define member function
void st_addr ::setinfo(){
name="anza";
phone=12345678;
}
void st_addr::getinfo(){
cout<<"name:"<<name<<endl;
cout<<"phone:"<<phone<<endl;
}
void st_result::aver(){
cout<<"enter marks of 2 sub:";
cin>>sub1>>sub2;
sum=sub1+sub2;
avg=sum/2;
}
void teacher::display(){
    cout<<"name of teacher:"<<name<<endl;
    cout<<"grade:"<<grade<<endl;
   
    



}
