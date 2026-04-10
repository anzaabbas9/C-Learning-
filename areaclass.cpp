#include<iostream>
using namespace std;
class Area{
    public:
    float length;
    float width;
    float result;
   
    Area(float length,float width){
        cout<<"welcome to constructor"; //constructor
        this->length=length;
        this->width=width;
    }
    ~Area(){
        cout<<"welcome to distructor"; //distructor
        
    }
    void area(){
        result=length*width;  //member function
        cout<<"area:"<<result<<endl;
    }

};
int main(){
    Area a1(32.2,45.7);
        a1.area();
}