//Aurthor: anza//
/*written on:27/2/2026 
day:saturday
time:10:36 Am*/
#include<iostream>
#define PI 3.1415//define macros//
using namespace std;
int r=2;// global delcaration//
void area();
class MyClass
{
    public:
    int a;
    void Display()
    {
    cout<<"this is class"<<endl;}


};
int main()
{
    MyClass m; 
    m.a=5;
    m.Display();
    area();
    cout<<"inside main func";
    cout<<"value of a:"<<m.a<<endl;
    return 0;

}
void area(){
float area;
area=PI*r*r;
cout<<"area is:"<<area;
}
