#include<iostream>
using namespace std;
class animal{
    public:
    string name;
    int price;
    string colour;
    animal(){
       cout<<"animal class constructor!";
    }
    virtual void feature()=0;
    void displayinfo(){
    cout<<"name:"<<name<<endl;
    cout<<"price:"<<price<<endl;
    cout<<"colour:"<<colour<<endl;
    }

};
class dog:public animal{
public:
dog():animal(){
 cout<<"enter name:";
 cin>>name;
  cout<<"enter price:";
 cin>>price;
  cout<<"enter colour:";
 cin>>colour;

}
void feature(){
    cout<<"barking!!!"<<endl;
}};
class cat:public animal{
  public:
  cat():animal(){
cout<<"enter name:";
 cin>>name;
  cout<<"enter price:";
 cin>>price;
  cout<<"enter colour:";
 cin>>colour;
  } 
  void feature(){
    cout<<"mewing!!"<<endl;
  } 
};
int main(){
 dog d1;
 cout<<"***dog info***"<<endl;
 d1.displayinfo();
 d1.feature();  
 cat c1;
 cout<<"***cat info***"<<endl;
 c1.displayinfo();
 c1.feature(); 
}