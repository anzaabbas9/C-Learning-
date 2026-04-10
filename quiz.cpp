#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
class quiz{
    public:
    char choice;
   string data;
    string question;
    void display(){
        
        data="1 byte equals to:"
        "1 nibble equals to:"
        "1 MB equals to:";
        question=rand()%40;
        cout<<question <<endl;
        //uestion="who is founder of pakistan?";
       // question="who is national poet of pakistan ?";
        cout<<"A.8 byte"<<"  "<<"B.4 byte"<<" "<<"C.1024 kb"<<endl;
         cout<<"enter your choice:";
        cin>>choice;
        if(choice=='B'||choice=='b')
        cout<<"correct answer"<<endl;
        else
        cout<<"wrong!! ";
    }
};
int main(){
    srand(time(0));
    quiz q1;
    q1.display();
}