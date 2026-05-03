#include<iostream>
#define PI 3.1415
using namespace std;
class circle{
    public:
    float radius;
    float result;
    circle(float r){
        radius=r;  
    }
    void area(){
        result= PI * radius * radius;
        cout<<"area:"<<result<<endl;
    }
};
int main(){
    circle c1(2.1234);
    c1.area();
    return 0;
}