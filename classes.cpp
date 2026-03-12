#include<iostream>
using namespace std;
class car{
    private:
    int num;
    public:
    string brand;
    int model;
    car(int m,string b){
        brand=b;
        model=m;}
    void setnum(int n){
        num=n;
    }
    void getnum(int n){
       cout<<"car number is:"<<n<<endl;
    }
   void showinfo(){
  
    cout<<"car model:"<<brand<<endl;
    cout<<"car model:"<<model<<endl;
   }};
   
int main(){
    car c1(2023,"abcd");
    c1.getnum(34567);
    c1.showinfo();
    return 0;
}