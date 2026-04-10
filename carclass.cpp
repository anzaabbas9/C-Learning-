#include<iostream>
using namespace std;
class car{
    private:
    int car_no;
    public:
    string brand;
    int model;
    car(string b,int m)
    {
        brand=b;
        model=m;
        
    }
    void setinfo(){
        cout<<"enter car no"<<car_no<<endl;
        cin>>car_no;
    }
    void getinfo(){
        cout<<"car no. is:"<<car_no<<endl;
    }
    void displayinfo(){
        cout<<"car brand:"<<brand<<endl;
        cout<<"car model:"<<model<<endl;
    }
};
int main(){
    car c1("fortunner",2023);
    c1.setinfo();
    c1.getinfo();
    c1.displayinfo();
    return 0;
}