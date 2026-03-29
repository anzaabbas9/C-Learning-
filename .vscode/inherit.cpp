#include<iostream>
using namespace std;
class st_addr
{
    private:
    string name;
    int phone;
    public:
    void setinfo();
    void getinfo();
    
};
class st_result:public st_addr
{
public:
int sub1;
int sub2;
float sum;
float avg;
void aver();

};
int main(){
    st_result s1;
    s1.setinfo();
    s1.getinfo();
    s1.aver();
}
void st_addr ::setinfo(){
name="anza";
phone=12345678;
}
void st_addr::getinfo(){
cout<<"name:"<<name<<endl;
cout<<"phone:"<<phone<<endl;
}
void st_result::aver(){
sum=sub1+sub2;
avg=sum/2;
cout<<"sum:"<<sum<<endl;
cout<<"average:"<<avg<<endl;
}