#include<iostream>
using namespace std;
class human {
    private:
    string name;
    int phone_no;
    public:
    human(){
    cout<<"hey!! i'm constructor"<<endl;
    }
    void display(){
        cout<<"name:"<<name<<endl;
        cout<<"phone number:"<<phone_no<<endl;
    }
    int getphone(){
        cout<<"enter phone number:";
        cin >>phone_no;
       return phone_no; 
    }
    string getname(){
        cout<<"enter name;";
        cin >>name;
        return name;
    }
};
int main(){
    human h1;
    h1.getname();
    h1.getphone();
    h1.display();
}
