#include<iostream>
using namespace std;
class car{
    private:
    int num;
    public:
    string brand;
    int model;
    car(int m,string b){ 
        cout<<"hi i'm constructor "<<endl;   //constructor
        brand=b;
        model=m;}
    car(car &obj){
     cout<<"hi i'm copy constructor"<<endl; //copy constructor
     this->brand=obj.brand;
     this->model=obj.model;
     this->num=obj.num;   
    }
    void setnum(int n){
        num=n;              //setter
    }
    void getnum(int n){
       cout<<"car number is:"<<n<<endl; //getter
    }
   void showinfo(){
    cout<<"car brand:"<<brand<<endl;      //member function
    cout<<"car model:"<<model<<endl;
   }};
   
int main(){
    car c1(2023,"abcd");
    car c2(c1);
    c1.getnum(34567);
    c1.showinfo();
    c2.showinfo();
    c2.getnum(7987087);
    return 0;
}